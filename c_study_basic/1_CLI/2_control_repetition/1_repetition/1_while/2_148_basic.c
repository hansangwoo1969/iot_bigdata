#include <stdio.h>

/*
  while([상수|변수|표현식]){
  step1] while ()안에 있는 표현식이 있으면 평가한다.
  step2] 평가한 결과가 참(1)이면 변수나 상수는 0이 아니값이면,
         while이하의 statement block을 수행한다.
         거짓(0)이면 statement block을 빠져 나온다.
  step3] step2에서 참인경우 step1로 이동한다.
  메타문자 round bracket () / brace {} / square bracket []  
*/

void main(){
    int world=7;
    int number=1;
    printf("world sector: %d", world);
   // int number=0;
    while(number<=50){   // while([상수|변수|표현식])
        printf("%d_hello world!\n",(number+1));
	number++;

    }
}
