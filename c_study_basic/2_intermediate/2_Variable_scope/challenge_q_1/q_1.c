#include <stdio.h>
#pragma warning (disable:4996)
// 10���� ������ �Է¹޾�, 16������ ���
void main() {
	int num;
	char c;

	printf("10���� ������ �Է��ϼ���: ");
	scanf("%d", &num);
	
	printf("10���� %d�� 16���� %x�̴�.", num, num);

}