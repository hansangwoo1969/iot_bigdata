/* ���ڿ� ����� ������ ����� 
1. mystory.txt���� �����ؼ� �̸�, �ֹι�ȣ, ��ȭ��ȣ�� �����ϴ� ���α׷� �ۼ�
2. ���ھտ� #���̰�, ����Ϸ��� �޸������� Ȯ��
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {

	FILE* fp = fopen("mystory.txt", "wt");
	fputs("#�̸�: ������ \n", fp);
	fputs("#�ֹι�ȣ: 900208-1012589 \n", fp);
	fputs("#��ȭ��ȣ: 010-1111-1112 \n", fp);
	fclose(fp);

	return 0;

}
