#include <stdio.h>
#pragma warning (disable:4996)
/* 피보나치 수열 출력하는 함수 정의
 * Ex) 5입력시 0부터 시작해서 총 5개의 피보나치 수열을 출력
 *     피보나치 수열은 0,1,1,2,3,5,8,13,21,34,55
 * 피보나치 수열은 0과 1에서 시작, 세번째 이후의 수열부터는 이전의 두값의 합
 */

void fibo(int cnt){
	int i=0;      // 카운트 증가 변수
	int f_a = 0;
	int f_b = 1;
        int f_c ;

//	if (cnt <= 1){
//		printf("%d ", cnt);
//	}

	if (cnt == 1){
		printf("%d ", f_a);
		return;
	}else if (cnt == 2) {
		printf("%d %d ", f_a, f_b);
		return;
	} else {

	for ( i=2; i < cnt; i++){
		f_c = f_a + f_b;
		printf("%d ", f_c);
		f_a = f_b;	
		f_b = f_c;
	}
	}
}

void main(){
	int cnt;  // 피보나치 조회할 갯수

	printf("개수 입력: ");
	scanf("%d", &cnt);
	
	fibo(cnt);
}

