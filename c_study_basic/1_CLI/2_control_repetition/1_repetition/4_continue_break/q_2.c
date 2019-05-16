#include <stdio.h>
/* 다음식을 만족하는 모든 A와 Z를 구하는프로그램 작성
 *     A Z
 *   + Z A
 *   ------
 *     99 
 */

void main(){
	int A = 9;
	int Z = 0;

	A = 9-Z;

	for (Z = 0; Z < 9; Z++){
		A = 9-Z;
		printf("(AZ)%d%d + (ZA)%d%d =  %d \n",A,Z,Z,A, (A*10+Z)+(Z*10+A)); 
		
	}
}
