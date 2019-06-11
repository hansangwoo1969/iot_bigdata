/* 메모리공간의 동적할당
1. 문자열을 입력받아 단어를 역으로 출력, "I am a boy" -> "boy a am I"
2. 문자열의 최대길이 정보 먼저 입력받기로 하고,
3. 그리고 그 길이만큼 메모리 공간을 동적으로 할당해서 문자열을 입력받기로,,
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#pragma warning (disable:4996)

int main(void) {
	int maxlen, len, i;
	char* str;
	printf("문자열의 최대 길이 입력: ");
	scanf("%d", &maxlen);
	getchar();   // \n문자의 삭제
	str = (char*)malloc(sizeof(char) * (maxlen + 1));

	printf("문자열 입력: ");
	fgets(str, maxlen + 1, stdin);
	str[strlen(str) - 1] = 0;  // \n문자의 삭제
	len = strlen(str);

	for (i = len; i > 0; i--) {
		if (str[i] == ' ') {
			printf("%s", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
	free(str);
	return 0;
}
