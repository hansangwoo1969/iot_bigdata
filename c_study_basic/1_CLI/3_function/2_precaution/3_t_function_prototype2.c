#include <stdio.h>
#pragma warning (disable:4996)

// 함수 원형 (Function Prototype)
void my_add(void);

void main(){
	my_add(); // 함수 호출(function call)
}

void my_add(void){ // 함수 정의부
	int result;
	int number1;
	int number2;

	printf("두 수를 입력하세요: ");
	scanf("%d %d", &number1, &number2 );

	printf("\n ==간단한 덧셈 연산 ver.1 == \n"); 
	printf("첫 번째 입력: %d \n", number1);
	printf("두 번째 입력: %d \n", number2);

	result = number1 + number2;
	printf("%d + %d = %d\n", number1, number2, number1+number2);
}


