#include <stdio.h>
#pragma warning (disable:4996)


int main(void) {

	// w���� ������ ���� ��쿡�� ���� ������ �ϰ�
	// ������ ������ �ִ� ��쿡�� �ش������� ������ ���
	// �ʱ�ȭ�� ���¿��� ���� �ۼ��� ������ overwrite�Ѵ�.
	FILE* fp = fopen("data.txt", "wt");
	if (fp == NULL) {
		puts("���Ͽ��½���!");
		return -1;
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
