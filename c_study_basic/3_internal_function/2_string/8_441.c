#include <stdio.h>
# include <string.h>
#pragma warning(disable:4996)

void main(){
	char my_password[] = "cjdrnr";
	char input_password[] = "cjdrnr";

	if (my_password == input_password)    // 배열의 주소값을 비교하므로 같지 않다.
		puts("패스워드가 일치합니다.");
	else
		puts("패스워드가 불일치 합니다.");
}

// 문자열의 내용을 비교하고자 한다면, 
/*
# include <string.h>
int strcmp(const char * s1, const char * s2);
int strncmp(const char * s1, const char * s2, size_t n);
=> 두 문자열의 값이 같으면 0, 같지 않으면 0이 아닌값을 반환
	0이 반환되면 동일한 문자열, 0이 아닌 값이 반환되면 동일하지 않은 문자열
	문자열의 크기는 사전순으로 ,,,
*/
