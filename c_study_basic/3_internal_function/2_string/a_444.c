#include <stdio.h>
# include <stdlib.h>
#pragma warning(disable:4996)

// a to i : ���ڸ� ���ڷ� ��ȯ�ϴ� �Լ�,, �Ѱ����� ������ ��, �������� �ݺ�������
// ������ �ݿ��ؼ� �迭�� ����ʿ�

int main(){

	char str[20];
	printf("���� �Է�: ");
	scanf("%s", str);
//	fgets(str, sizeof(str), stdin);
	printf("%d \n", atoi(str));

	printf("�Ǽ� �Է�: ");
	scanf("%s", str);
	printf("%g \n", atof(str));
	
	return 0;

}
