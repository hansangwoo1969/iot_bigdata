#include <stdio.h>
# include <string.h>
#pragma warning(disable:4996)

int main(){
	char str1[20];
	char str2[20];

	printf("문자열 입력 1: ");
	scanf("%s", str1);    // 배열자체가 주소값을 가지므로 &연산자 불필요
	printf("문자열 입력 2: ");
	scanf("%s", str2);

	if (!strcmp(str1, str2)) {  // 두문자열 동일시 0을 반환, if문이 참이 되려면 0이외의 숫자가 필요.     
		puts(" 두 문자열은 완벽히 동일합니다.");
	}
	else {
		puts("두 문자열은 동일하지 않습니다.");

		if (!strncmp(str1, str2, 3))
			puts("그러나 앞의 세 글자는 동일합니다.");
	}
	return 0;


}
