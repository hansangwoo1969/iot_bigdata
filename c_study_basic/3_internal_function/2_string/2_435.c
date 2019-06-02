#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

// fgets함수는 \n이 기본으로 딸려 들어옴,
// \n 문자를 문자열에서 제외하고자 할때   => 마지막 문자앞에 널문자 입력,,,


void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;   // 마지막 문자앞(엔터\n)에 널문자 입력
}


int main(){
	char str[100];

	//printf("문자열 입력: ");
	fputs("문자열 입력: ", stdout);
	fgets(str, sizeof(str), stdin);   // fgets는 '\n'까지 문자로 읽어옴
	printf("길이: %d, 내용: %s \n", strlen(str), str);

	RemoveBSN(str);     // 배열의 이름은 주소
	printf("길이: %d, 내용: %s \n",strlen(str), str);

	return 0;
}
