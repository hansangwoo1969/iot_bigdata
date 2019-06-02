#include <stdio.h>
#include <string.h>

// 정답지 보고 insight를 가질 것,,
// 적당한 길이의 문자열 입력받아 그 안에 존재하는 숫자의 총합을 계산해서 출력하는 프로그램
// 예) 입력받은 문자열 "A15#43", 1+5+4+3의 연산결과 출력 

int CovToInt(char c) {
	static int diff = 1 - '1';    // 모든 숫자 n과 문자 'n'의 차는 동일하다.
	return c + diff;
}

int main() {
	char str[50];
	int i, len;
	int sum = 0;

	puts("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	//scanf("%s", str);
	len = strlen(str);

	// 숫자 구하기
	for (i = 0; i < len; i++) {
		if ('1' <= str[i] && str[i] <= '9') {
			sum += ConvToInt(str[i]);
		}
	}
	printf("숫자의 총 합: %d \n", sum);
	return 0;
}



