#include <stdio.h>
#pragma warning (disable:4996)
/*
void main() {
	// �ϳ��� ����ܾ �Է� �޾�, �Է¹��� ���ܾ��� ���̸� ����Ͽ� ���,
	// ex) "Array"��� �ܾ �Է� �Ǹ� 5�� ��µǾ�� 

	char str[10];
	int idx = 0;
	int arrlen;

	printf("���ڿ� �Է�: ");
	scanf("%s", str);
	printf("�Է� ���� ���ڿ�: %s \n", str);
	printf("�迭 str�� ũ��: %d \n", sizeof(str));
	printf("�迭 arr1�� ũ��: %d\n", sizeof(str));
	arrlen = sizeof(str) / sizeof(char);
	printf("�Է¹��� �迭�� ũ��: %d", arrlen);
}
*/

int main(){
	char voca[100];
	int len=0;

	printf("�� �ܾ� �Է�: ");
	scanf("%s", voca);

	while (voca[len] != 0)   // while (voca[len] != '\n')
		len++;
	printf("�Է��� ����ܾ��� ���̴� %d \n", len);

	return 0;
}
