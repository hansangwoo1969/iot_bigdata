#include <stdio.h>

void main(){
	float num1, num2;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%f %f", &num1, &num2);

	printf("%f / %f  = %.0f\n", num1, num2,  num1/num2);
	printf("%f %% %f = %.0f\n", num1, num2, num1%num2);
}
