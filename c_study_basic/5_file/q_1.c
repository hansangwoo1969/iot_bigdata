#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {
	FILE* fp = fopen("mystory.txt", "wt");
	fputs("#�̸�: �ѻ�� \n", fp);
	fputs("#�ֹι�ȣ: 190207-1807421 \n", fp);
	fputs("#��ȭ��ȣ: 010-0001-01421 \n", fp);
	fclose(fp);

	return 0;
}
