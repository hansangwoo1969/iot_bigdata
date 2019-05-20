#include <stdio.h>

void my_add(){
	int result;
	int number1;
	int number2;

	printf("두 수를 입력하세요: ");
	scanf("%d %d", &number1, &number2 );

	printf("\n ==간단한 덧셈 연산 ver.1 == \n"); 
	printf("첫번째 입력: %d \n", number1);
	printf("두 번째 입력: %d \n", number2);

	result = number1 + number2;
	printf("%d + %d = %d\n", number1, number2, number1+number2);
	printf("연산이 종료 되었습니다. 감사합니다.\n");
}

void main(){
	my_add();
	my_add();
	/*
	my_substraction();
	my_multiplication();
	my_multiplication();
	my_division();
	*/
}
