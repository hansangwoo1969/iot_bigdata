#include <stdio.h>
#pragma warning (disable:4996)


int main(void) {

	int ch, i;
	FILE* fp = fopen("data.txt", "rt");
//	FILE* fp = fopen("no_file.txt", "rt");
	if (fp == NULL) {
		puts("���Ͽ��½���!");
		return;
	}

	for (i = 0; i < 3; i++) {
		ch = fgetc(fp);  // fgetc�Լ��� ���Ͽ� ����� ���� �ϳ��� ��ȯ�ϴ� �Լ�
		printf("%c \n", ch);
	}
	 fclose(fp);

	return 0;
}
