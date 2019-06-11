#include <stdio.h>
#pragma warning (disable:4996)


int main(void) {

	int ch, i;
	FILE* fp = fopen("data.txt", "rt");
//	FILE* fp = fopen("no_file.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈실패!");
		return;
	}

	for (i = 0; i < 3; i++) {
		ch = fgetc(fp);  // fgetc함수는 파일에 저장된 문자 하나를 반환하는 함수
		printf("%c \n", ch);
	}
	 fclose(fp);

	return 0;
}
