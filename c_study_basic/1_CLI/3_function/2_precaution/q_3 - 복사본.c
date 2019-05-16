#include <stdio.h>
/* 피보나치 수열 출력하는 함수 정의
 * Ex) 5입력시 0부터 시작해서 총 5개의 피보나치 수열을 출력
 *     피보나치 수열은 0,1,1,2,3,5,8,13,21,34,55
 * 피보나치 수열은 0과 1에서 시작, 세번째 이후의 수열부터는 이전의 두값의 합
 */

///////////////

void fibo(int cnt){
	int n = 0;
	int result;

//	n = fibo(n-1) + fibo(n-2)
	for ( n=0; n<cnt; n++){
		//n = fibo(n-1) + fibo(n-2);
        	if (n <= 1){
	        	printf("%d ", n);
	        } else if (n > 1) {
	            //    n = fibo(n-1) + fibo(n-2);
		        result = fibo(n-1) + fibo(n-2);
			printf("%d ", result); 
		//	printf("%d ", n ); 
		}
	}
}

void main(){
	int cnt;  // 피보나치 조회할 갯수

	printf("개수 입력: ");
	scanf("%d", &cnt);
	
	fibo(cnt);
}

/*
f1=0;
f2=1
f3=f2+f1
f4=f3+f2
fn = fn-1 + fn-2
*/
