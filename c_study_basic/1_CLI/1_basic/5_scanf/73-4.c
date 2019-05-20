#include <stdio.h>

void main(){
	float num1, num2;

	printf("두 수를 입력하세요: ");
	scanf("%f %f", &num1, &num2);

	printf("%f / %f  = %.0f\n", num1, num2,  num1/num2);
	printf("%f %% %f = %.0f\n", num1, num2, num1%num2);
}
