#include <stdio.h>
/*
 *  �ټ����� ������ ���ڷ� ���� �޾�,
 *  1. ���� ū ���� ��ȯ�ϴ� �Լ�
 *  2. ���� ���� ���� ��ȯ�ϴ� �Լ��� �����ϰ�, 
 *  �� �Լ����� ȣ���ϴ� main�Լ��� �ۼ�,, 
 */

int max(int num1, int num2, int num3, int num4, int num5) {
	if (num1 > num2 && num2 > num3 && num3 > num4 && num4 > num5){
		return num1;
	} else if (num1 < num2 && num2 > num3 && num3 > num4 && num4 > num5) {
		return num2;
	} else if (num1 < num2 && num2 < num3 && num3 > num4 && num4 > num5) {
		return num3;
	} else if (num1 < num2 && num2 < num3 && num3 < num4 && num4 > num5) {
		return num4;
	} else {
		return num5;
	} 
}

int min(int num1, int num2, int num3, int num4, int num5) {
	if (num1 < num2 && num2 < num3 && num3 < num4 && num4 < num5){
		return num1;
	} else if (num1 > num2 && num2 < num3 && num3 < num4 && num4 < num5) {
		return num2;
	} else if (num1 > num2 && num2 > num3 && num3 < num4 && num4 < num5) {
		return num3;
	} else if (num1 > num2 && num2 > num3 && num3 > num4 && num4 < num5) {
		return num4;
	} else {
		return num5;
	} 
}

void main(void){
	int num1, num2, num3, num4, num5;

	printf("�ټ����� ������ �Է��ϼ���: \n");
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	printf( "�ټ����� ������ MAX: %d \n", max(num1, num2, num3, num4, num5) ); 
	printf( "�ټ����� ������ min: %d \n", min(num1, num2, num3, num4, num5) ); 

}
