#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {

	char str[30];
	int ch;

	FILE* fp = fopen("simple.txt", "rt");
	if (fp == NULL) {
		puts("파일오픈실패!");
		return -1;
	}
	
	ch = fgetc(fp);
	printf("%c", ch);
	ch = fgetc(fp);
	printf("%c", ch);

	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fgets(str, sizeof(str), fp);
	printf("%s", str);

	fclose(fp);
	
	return 0;
}
