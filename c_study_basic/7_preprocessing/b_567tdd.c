#include <stdio.h>
#pragma warning (disable:4996)
// cl /DIOT_DEBUG b_567tdd.c
// IOT_DEBUG 매크로 상수는 #define뿐만아니라 컴파일 옵션에 위화 같이 정의할 수 도 있다


int main(void) {
	int num1, num2;

#ifdef IOT_DEBUG
	puts("main] debug1");
#endif 
	printf("두 개의 정수 입력: ");
#ifdef IOT_DEBUG
	puts("main] debug2");
#endif 
	scanf("%d %d", &num1, &num2);
#ifdef IOT_DEBUG
	puts("main] debug3");

	puts("main] debug4");
#endif 
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#ifdef IOT_DEBUG
	puts("main] debug5");
#endif 
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#ifdef IOT_DEBUG
	puts("main] debug6");
#endif 
	return 0;
}
