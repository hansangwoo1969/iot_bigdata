#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

// fgets�Լ��� \n�� �⺻���� ���� ����,
// \n ���ڸ� ���ڿ����� �����ϰ��� �Ҷ�   => ������ ���ھտ� �ι��� �Է�,,,


void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;   // ������ ���ھ�(����\n)�� �ι��� �Է�
}


int main(){
	char str[100];

	//printf("���ڿ� �Է�: ");
	fputs("���ڿ� �Է�: ", stdout);
	fgets(str, sizeof(str), stdin);   // fgets�� '\n'���� ���ڷ� �о��
	printf("����: %d, ����: %s \n", strlen(str), str);

	RemoveBSN(str);     // �迭�� �̸��� �ּ�
	printf("����: %d, ����: %s \n",strlen(str), str);

	return 0;
}
