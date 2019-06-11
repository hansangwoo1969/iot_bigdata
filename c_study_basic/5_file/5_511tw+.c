#include <stdio.h>
#pragma warning (disable:4996)
#define CHAR_COUNT 9


int main(void) {
	int i, ch;

	// w모드는 파일이 없을 경우에는 새로 생성을 하고
	// 기존에 파일이 있는 경우에는 해당파일의 내용을 모두
	// 초기화한 상태에서 새로 작성한 내용을 overwrite한다.
	FILE* fp = fopen("data.txt", "w+");
	if (fp == NULL) {
		puts("파일오픈실패!");
		return -1;
	}

	for (i = 0; i < CHAR_COUNT; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fputc('1', fp);
	fputc('2', fp);
	fputc('3', fp);
	// fclose(fp);
	if (fclose(fp) == EOF) {
		puts("파일 close실패!");
	}

	return 0;

}
