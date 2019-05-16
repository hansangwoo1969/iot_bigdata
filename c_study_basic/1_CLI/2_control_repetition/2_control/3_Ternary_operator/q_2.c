#include <stdio.h>
/*
 *  두 개의 정수를 입력 받아 두 수의 차를 출력,
 *  단, 무조건 큰 수에서 작을 수를 뺀 결과를 출력해야,,
 
 */

 void main(){
	int num1, num2, result;

	printf("두 개의 정수를 입력하세요 ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2){
		result = num1 - num2;
	}else {
		result = num2 - num1;
	}
	printf(" %d 와 %d의 차: %d", num1, num2, result);

 }
