#include <stdio.h>
#pragma warning (disable:4996)


int main(void) {

	// a���� ������ ���� ��쿡�� ���� ������ �ϰ�
	// ������ ������ �ִ� ��쿡�� ������ ���� ���ٿ� ���⸦ �Ѵ�.
	FILE* fp = fopen("data2.txt", "at");
	if (fp == NULL) {
		puts("���Ͽ��½���!");
		return -1;
	}

	fputc('D', fp);
	fputc('E', fp);
	fputc('F', fp);
	// fclose(fp);
	if (fclose(fp) == EOF) {
		puts("���� close����!");
	}	

	return 0;

}
