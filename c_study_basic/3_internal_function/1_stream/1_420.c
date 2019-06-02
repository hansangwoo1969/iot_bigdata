#include <stdio.h>
#pragma warning(disable:4996)

void main(){
	int ch1, ch2;
	char my_str[100];
/*
	printf("문자열을 입력하세요: ");
	scanf("%s", my_str);   // 공백을 구분자로 사용
	printf("%s", my_str);
	printf("출력완료\n");
	*/
	ch1=getchar();   // 문자입력
	ch2=fgetc(stdin);   // 엔터키 입력

	putchar(ch1);        // 문자출력
	fputc(ch2, stdout);  // 엔터키 출력
	
	
}
