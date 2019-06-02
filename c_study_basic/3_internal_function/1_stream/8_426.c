#include <stdio.h>

void main(){
	char str[7];
	int i;

	for (i = 0; i < 3; i++) {
		fgets(str, sizeof(str), stdin);         // 범위를 초과한 입력분은 다음순번에 출력,,
		printf("Read %d: %s \n", i + 1, str);
	}
	
/*	for (i = 0; i < 3; i++) {
		gets(str, sizeof(str), stdin);       // 범위를 초과한 자료도 출력,,,이후 에러,,
		printf("Read %d: %s \n", i + 1, str);
	}*/
	/* 실행 결과
	We
	Read 1: We
	like
	Read 2: lik
	you
	Read 3: you	
	*/





}
