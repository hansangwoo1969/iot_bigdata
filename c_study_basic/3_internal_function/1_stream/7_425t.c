#include <stdio.h>
#pragma warning(disable:4996)

void main(){
	char str[7];
	int i;


	// gets의 반환값들은 읽어들인 문자열을 반환한다.
	// str에 call by reference로 값이 반환되므로 같은 결과이다.
	// printf("%s", gets(str));
	gets(str);
	puts(str);
	// 수행 결과1
	// AA BB  <= 입력 : 공백 문자를 포함하여 입력을 받는다.
	// AA BB  <= 출력 

	// 수행 결과2
	// Hello World! <= 입력
	// 런타임 에러 발생 (str의 사이즈보다 큰 문자열을 입력 받는 것을 시도하였기 때문에)


	/*for (i = 0; i < 3; i++) {
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s \n", i + 1, str);
	}
	*/
}
