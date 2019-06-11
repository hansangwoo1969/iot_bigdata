#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {
	
	FILE* fp = fopen("simple.txt", "wt");
	if (fp == NULL) {
		puts("파일오픈실패!");
		return -1;
	}
	
	fputc('A', fp);
	fputc('B', fp);
	fputs("My name is Hong \n", fp);
	fputs("Your name is Yoon \n", fp);
	fclose(fp);
	
	return 0;

}
