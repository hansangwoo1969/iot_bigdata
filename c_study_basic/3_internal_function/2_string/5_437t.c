#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)


int main(){
	char str1[30]="1234567890";     // source
	char str2[30];					// destination
	char str3[5];
	

	//strncpy(str2, str1, sizeof(str2));
	// 널값이 복사되지 않기때문에 문자 배열로써 의미가 있고
	// 문자열로써 기능을 수행 할 수 없다.
	strncpy(str2, str1, 6);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	
	strncpy(str3, str1, sizeof(str3));
	printf("str3: %s\n", str3);

	strncpy(str3, str1, sizeof(str3)-1);
	str3[sizeof(str3) - 1] = 0;  // 널값(0)을 (str3의 길이 -1)의 자리에 대입
	printf("str3: %s\n", str3);


	return 0;
}
