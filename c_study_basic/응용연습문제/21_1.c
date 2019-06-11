/* getchar 함수와 putchar함수의 활용 
1. 사용자로부터 알파벳 문자하나 입력 받아,대(소)문자이면 소(대)문자로 변환하여 출력,
2. 문자의 입출력에는 getchar와 putchar함수 사용,
3. 알파벳이외의 문자를 입력하는 경우, 오류메시지 출력,,
*/

#include <stdio.h>
#pragma warning (disable:4996)

int ConveCase(int ch)
{
	int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return -1;
}

int main(void) {
	int ch;
	printf("문자 입력: ");
	ch = getchar();		// 문자입력
	ch = ConveCase(ch);	// 문자변환
	if (ch == -1)
	{
		puts("범위를 벗어난 입력입니다.");
		return -1;
	}
	putchar(ch);	// 변환된 문자 출력
		
	return 0;
}
