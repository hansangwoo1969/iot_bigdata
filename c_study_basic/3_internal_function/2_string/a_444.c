#include <stdio.h>
# include <stdlib.h>
#pragma warning(disable:4996)

// a to i : 문자를 숫자로 변환하는 함수,, 한개씩만 가능한 듯, 여려개는 반복문으로
// 공백을 반영해서 배열로 계산필요

int main(){

	char str[20];
	printf("정수 입력: ");
	scanf("%s", str);
//	fgets(str, sizeof(str), stdin);
	printf("%d \n", atoi(str));

	printf("실수 입력: ");
	scanf("%s", str);
	printf("%g \n", atof(str));
	
	return 0;

}
