#include <stdio.h>
/*
 * �� ���� ������ ���ڷ� ���� �޾�,
 *  1. ���� ū ���� ��ȯ�ϴ� �Լ�
 *  2. ���� ���� ���� ��ȯ�ϴ� �Լ��� �����ϰ�, 
 *  �� �Լ����� ȣ���ϴ� main�Լ��� �ۼ�,, 
 */

int max(int num1, int num2, int num3) {
	if (num1 > num2 && num2 > num3){
		return num1;
	} else if (num1 < num2 && num2 > num3) {
		return num2;
	} else {
		return num3;
	}
}

int min(int num1, int num2, int num3) {
	if (num1 < num2 && num2 < num3){
		return num1;
	} else if (num1 > num2 && num2 < num3) {
		return num2;
	} else {
		return num3;
	}
}

void main(void){
	int num1, num2, num3;

	printf("�� ���� ������ �Է��ϼ���: \n");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf( "�� ���� ������ MAX: %d \n", max(num1, num2, num3) ); 
	printf( "�� ���� ������ min: %d \n", min(num1, num2, num3) ); 

}
