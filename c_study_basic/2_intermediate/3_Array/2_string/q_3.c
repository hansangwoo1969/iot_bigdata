#include <stdio.h>
#pragma warning (disable:4996)
/*
void main() {
	// 하나의 영어단어를 입력 받아, 입력받은 영단어의 길이를 계산하여 출력,
	// ex) "Array"라는 단어가 입력 되면 5가 출력되어야 

	char str[10];
	int idx = 0;
	int arrlen;

	printf("문자열 입력: ");
	scanf("%s", str);
	printf("입력 받은 문자열: %s \n", str);
	printf("배열 str의 크기: %d \n", sizeof(str));
	printf("배열 arr1의 크기: %d\n", sizeof(str));
	arrlen = sizeof(str) / sizeof(char);
	printf("입력받은 배열의 크기: %d", arrlen);
}
*/

int main(){
	char voca[100];
	int len=0;

	printf("영 단어 입력: ");
	scanf("%s", voca);

	while (voca[len] != 0)   // while (voca[len] != '\n')
		len++;
	printf("입력한 영어단어의 길이는 %d \n", len);

	return 0;
}
