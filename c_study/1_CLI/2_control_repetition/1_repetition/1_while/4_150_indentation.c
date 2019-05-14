#include <stdio.h>
// 들여쓰기(Indentation)
// 들여쓰기는 함수, while, for, if이하의 statement block을 구분하기 위하여
// C문법과 무관하게 준수하여야 한다.
void main(){
int world=7;
int number=1;
printf("world sector: %d", world);
// int number=0;
while(number<50){   // while([상수|변수|표현식])
printf("%d_hello world!\n",(number+1));
number++;

}
}
