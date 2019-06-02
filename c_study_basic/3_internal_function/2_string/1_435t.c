#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

// strlen함수: 인자로 전달된 문자열의 길이 반환
// size_t strlen(const char * s)  => 문자열의 길이를 반환하되, 널 문자는 길이에 포함안함


void main(){

	char str[] = "1234567";       
	char str2[100];
	char* str3 = "Hello World!";

	scanf("%s", str2);    // 배열자체가 주소라 &연산자는 필요없음
	printf("%s strlen(str): %u \n",str, strlen(str));
	printf("%s strlen(str2): %u \n",str2, strlen(str2));
	printf("%s strlen(str3): %u \n", str3, strlen(str3));

}
