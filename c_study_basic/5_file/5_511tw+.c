#include <stdio.h>
#pragma warning (disable:4996)
#define CHAR_COUNT 9


int main(void) {
	int i, ch;

	// w���� ������ ���� ��쿡�� ���� ������ �ϰ�
	// ������ ������ �ִ� ��쿡�� �ش������� ������ ���
	// �ʱ�ȭ�� ���¿��� ���� �ۼ��� ������ overwrite�Ѵ�.
	FILE* fp = fopen("data.txt", "w+");
	if (fp == NULL) {
		puts("���Ͽ��½���!");
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
		puts("���� close����!");
	}

	return 0;

}
