#include <stdio.h>
#pragma warning (disable:4996)
/*
void main() {
// char형 1차원 배열을 선언과 동시에 다음문장으로 초기화 하고,
// 초기화 이후에는 저장된 내용을 출력,
// "Good time"

	char str[] = "Good time";
	int idx = 0;

	//printf("문자열 입력: ");

	scanf("%s", str);
	printf("입력 받은 문자열: %s \n", str);

	printf("문자 단위 출력: ");
	while (str[idx] != '\0') {
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
}
*/

int main(void){
	char str[]={'G', 'o' ,'o' , 'd' ,' ' , 't', 'i', 'm', 'e'};
	int arrLen = sizeof(str) / sizeof(char);
	int i;

	for (i=0; i<arrLen; i++)
	{
		printf("%c", str[i]);
	        printf("\n");
	}
	return 0;
}


