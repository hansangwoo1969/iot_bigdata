#include <stdio.h>
/*
 *  �� ���� ������ �Է� �޾� �� ���� ���� ���,
 *  ��, ������ ū ������ ���� ���� �� ����� ����ؾ�,,
 
 */

 void main(){
	int num1, num2, result;

	printf("�� ���� ������ �Է��ϼ��� ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2){
		result = num1 - num2;
	}else {
		result = num2 - num1;
	}
	printf(" %d �� %d�� ��: %d", num1, num2, result);

 }
