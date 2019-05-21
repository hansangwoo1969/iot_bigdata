#include <stdio.h>
// 프로그램 사용자 영단어 입력, char형 배열에 저장, 
// 단어 역순으로,, null문자의 위치변경 안됨,,
// 뒤집고 난 후 출력

int main(void){
	char str[100];
	int len=0, i, temp;

	printf("단어 입력: ");
	scanf("%s", str);

	while (str[len] != 0)
		len++;

	for (i=0; i<len/2; i++){
		temp = str[i] ;
		str[i] = str[(len-i)-1];
		str[(len-i)-1] = temp;
	}
	printf("%s", str);



}

