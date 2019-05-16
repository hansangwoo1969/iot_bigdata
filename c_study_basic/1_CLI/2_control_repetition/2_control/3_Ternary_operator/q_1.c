#include <stdio.h>
/*
 *  1이상 100미만의 정수 중에서 7의배수와 9의 배수를 출력하는 프로그램 작성
 *  단, 7과 9의 공배수는 한번만 출력
 
 */

 void main(){
	int num;

	for ( num=1 ; num<100; num++){
		if ( num % 7 == 0  || num % 9 ==0){
		printf("%d ", num);
	        }
         }
 }
