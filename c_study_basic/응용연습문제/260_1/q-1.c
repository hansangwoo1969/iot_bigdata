#include <stdio.h>
#pragma warning (disable:4996)

// 회문 판단(함수)
// 문자열 길이, 


//void is_palindrome(char *arr, int size)


int main(void) {
	char str[50];
	int i, len;

	printf("문자열 입력: ");
	scanf("%s", &str);

	for (i = 0; str[i] != 0; i++) {
		len = i;
	}
//	len = sizeof(str) / sizeof(char);

	for (i = 0; i < len - i; i++) {
		if (str[i] != str[len - i])
			break;
	}
	if (i > len / 2){
		printf("회문입니다\n");
    }else {
		printf("회문이 아닙니다\n");
	}
	return 0;
}