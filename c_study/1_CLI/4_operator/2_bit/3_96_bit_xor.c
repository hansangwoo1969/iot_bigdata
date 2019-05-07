#include <stdio.h>
/* XOR 연산 진리표 
   0 ^ 0  => 0
   0 ^ 1  => 1 
   1 ^ 0  => 1
   1 ^ 1  => 0
*/


void main(){
	int num1 = 15; // 00000000 00000000 00001111
	int num2 = 20; // 00000000 00000000 00010100
		       // 00000000 00000000 00011011   16+8+0+2+1=27
	int num3 = num1 ^ num2;  

	printf("XOR 연산의 결과: %\d\n", num3);




}

