#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {
	FILE* src = fopen("src.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	int ch;

	if (src == NULL || des==NULL) {
		puts("���Ͽ��½���!");
		return -1;
	}
	
	// �ѹ��ھ� ����
	while ((ch = fgetc(src)) != EOF)
		fputc(ch, des);

	if (feof(src) != 0)      // feof(); ������ ���� ������ ��� 0�� �ƴѰ� ��ȯ,,
		puts("���Ϻ��� �Ϸ�!");
	else
		puts("���Ϻ��� ����!");

	fclose(src);
	fclose(des);
	
	return 0;
}
