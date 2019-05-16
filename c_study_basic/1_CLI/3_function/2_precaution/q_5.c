#include <stdio.h>
/*
 *  다섯개의 정수를 인자로 전달 받아,
 *  1. 가장 큰 수를 반환하는 함수
 *  2. 가장 작은 수를 반환하는 함수를 정의하고, 
 *  이 함수들을 호출하는 main함수도 작성,, 
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

	printf("다섯개의 정수를 입력하세요: \n");
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	printf( "다섯개의 정수중 MAX: %d \n", max(num1, num2, num3, num4, num5) ); 
	printf( "다섯개의 정수중 min: %d \n", min(num1, num2, num3, num4, num5) ); 

}
