#include <stdio.h>
#pragma warning (disable:4996)
#define CHAR_COUNT 6

int main(void) {
	int ch, i;

	// a���� ������ ���� ��쿡�� ���� ������ �ϰ�
	// ������ ������ �ִ� ��쿡�� ������ ���� ���ٿ� ���⸦ �Ѵ�.
	FILE* fp = fopen("data2.txt", "a+");
	if (fp == NULL) {
		puts("���Ͽ��½���!");
		return -1;
	}
	for (i = 0; i < CHAR_COUNT; i++) {
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);
	// fclose(fp);
	if (fclose(fp) == EOF) {
		puts("���� close����!");
	}
	
	

	return 0;

}
