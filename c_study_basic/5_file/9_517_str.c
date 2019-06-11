#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	char str[20];

	if (src == NULL || des==NULL) {
		puts("파일오픈실패!");
		return -1;
	}
	
	// 문자열 단위 복사
	while (fgets(str, sizeof(str), src) != NULL)
		fputs(str, des);

	if (feof(src) != 0)      // feof(); 파일의 끝에 도달한 경우 0이 아닌값 반환,,
		puts("파일복사 완료!");
	else
		puts("파일복사 실패!");

	fclose(src);
	fclose(des);
	
	return 0;
}
