#include <stdio.h>
/* 
   함수정의 (Function Definition)
   [반환 (return)타입][함수명]([인자타입][인자명1],[인자명2],,,){
                                        parameter / argument
  	Statement1;
  	Statement2;
  	    '
           '
           [return][반환값];
   }          
*/

void main(){
	int result;
	int number1;
	int number2;

	printf("두 수를 입력하세요: ");
	scanf("%d %d", &number1, &number2 );

	printf("\n ==간단한 덧셈 연산 ver.1 == \n"); 
	printf("첫번째 입력: %d \n", number1);
	printf("두 번째 입력: %d \n", number2);

	result = number1 + number2;
	printf("%d + %d = %d\n", number1, number2, number1+number2);
	printf("연산이 종료 되었습니다. 감사합니다.\n");

}
