#include <stdio.h>
// 아스키 문자숫자를 문자/정수로 표현
void main(){
    char c_C;
    
    printf("ASCII코드용 문자를 입력하세요 ");
    scanf("%c", &c_C);
    
    printf("c_C의 정수값: %d \n", c_C);
    printf("c_C의 문자값: %c \n", c_C);

}
