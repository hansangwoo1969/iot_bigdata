#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)


int main(){
	char str1[30]="Simple String";
	char str2[30];
	char* str3 = str1;            // char형 포인터 str3이 str1을 가리킨다.(주소에 접근)

	strcpy(str2, str1);    // str1의 문자열을 str2에 복사
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);

	str2[7] = 's';
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	str3[7] = 's';               // 포인터 주소값으로 접근, 동기화
	printf("str1: %s\n", str1);
	printf("str3: %s\n", str3);

	return 0;
}
