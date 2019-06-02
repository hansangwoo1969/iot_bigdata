#include <stdio.h>
# pragma warning(disable:4996)

// str1과 str2를 통해서 프로그램 사용자로부터 문자열 입력받아(fgets함수),
// str1을 str3에 복사, str2를 str3에 추가
// str3 출력

int main (){
	char str1[20];
	char str2[20];
	char str3[40];
	
	printf("문자열 입력: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;
	printf("길이: %d, 내용: %s \n", strlen(str1), str1);

	printf("문자열 입력: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;
	printf("길이: %d, 내용: %s \n", strlen(str2), str2);	
	
	strcpy(str3, str1);
	//str3[sizeof(str3) - 1] = 0;
	puts(str3);
	
	strcat(str3, str2);
	puts(str3);


}



