#include <stdio.h>
#pragma warning (disable:4996)

void main(void) {
	char str[100];
	int len = 0, i, max = str[0];

	printf("영 단어 입력: ");
	scanf("%s", str);

	while (str[len] != 0)    // 문자열 요소가 없을 때 까지   while (str(len) != '\n'과 같음
		len++;

	for (i = 0; i < len; i++) {
		if (max < str[i])
			max = str[i];
	}
	printf("아스키코드값이 가장 큰 문자: %c \n", max);

}