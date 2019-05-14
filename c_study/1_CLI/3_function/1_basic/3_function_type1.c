#include <stdio.h>
/*
   함수유형 1
   반환타입 Ⅹ, 인자 Ⅹ (반환타입이 없고 인자도 없는 케이스)
   void의 의미는 없다(nothing), 정의하지 않겠다.
   그리고 인자가 없을 경우에는 void를 생략할 수 있다.
   void my_add(){
   아래와 같이 함수의 반환타입을 생략하면 일반적으로 컴파일 에러가 발생한다
  	(특히 임베디드 컴파일러)
   단 현재 visual studio c 컴파일러에서는 이를 허용하고 있다.
   따라서 유지보수를 위하여 절대로 생략하지 말 것
   my_add(void){
*/

void my_add(void){ // 함수 정의 (Function Definition)
	int result;
	int number1;
	int number2;

	printf("두 수를 입력하세요: ");
	scanf("%d %d", &number1, &number2 );

	printf("\n ==간단한 덧셈 연산 ver.1 == \n"); 
	printf("첫 번째 입력: %d \n", number1);
	printf("두 번째 입력: %d \n", number2);

	result = number1 + number2;
	printf("%d + %d = %d\n", number1, number2, number1+number2);
	printf("연산이 종료 되었습니다. 감사합니다.\n");
}

void main(){// C언어로 작성하면 프로그램 실행시 자동으로 호출되는 함수
	    // 따라서 C프로그램의 시작점(Entry Point)이 된다.
	printf("== 메인 프로그램 구동 ==\n");
	my_add(); // 함수 호출(function call)
	my_add();
	printf(" -- 메인 프로그램 종료 -- \n");
}
