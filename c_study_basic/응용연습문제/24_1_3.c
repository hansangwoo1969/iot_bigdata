/* getchar �Լ��� putchar�Լ��� Ȱ�� 
1. ����ڷκ��� ���ĺ� �����ϳ� �Է� �޾�,��(��)�����̸� ��(��)���ڷ� ��ȯ�Ͽ� ���,
2. ������ ����¿��� getchar�� putchar�Լ� ���,
3. ���ĺ��̿��� ���ڸ� �Է��ϴ� ���, �����޽��� ���,,
*/

#include <stdio.h>
#pragma warning (disable:4996)

int ConveCase(int ch)
{
	int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return -1;
}

int main(void) {
	int ch;
	printf("���� �Է�: ");
	ch = getchar();		// �����Է�
	ch = ConveCase(ch);	// ���ں�ȯ
	if (ch == -1)
	{
		puts("������ ��� �Է��Դϴ�.");
		return -1;
	}
	putchar(ch);	// ��ȯ�� ���� ���
		
	return 0;
}
