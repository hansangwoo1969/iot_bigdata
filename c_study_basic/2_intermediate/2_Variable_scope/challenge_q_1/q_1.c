#include <stdio.h>
#pragma warning (disable:4996)
// 10진수 정수를 입력받아, 16진수로 출력
void main() {
	int num;
	char c;

	printf("10진수 정수를 입력하세요: ");
	scanf("%d", &num);
	
	printf("10진수 %d는 16진수 %x이다.", num, num);

}