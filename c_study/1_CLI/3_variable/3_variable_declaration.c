#include <stdio.h>

void main(){
   
    // num1, num2를 변수(variable)라고 한다.
    // 변수는 값이 바뀔수 있는 수를 의미한다.
    int num1 = 2;
    int num2 = 1;

   // printf(" first:%d, second:%d, opertation result: %d", num1, num2, num1 + num2);
    
    printf("%d+%d =%d\n", num1, num2, num1+num2);
    printf("%d-%d =%d\n", num1, num2, num1-num2);
    printf("%d*%d =%d\n", num1, num2, num1*num2);
    printf("%d/%d =%d\n\n", num1, num2, num1/num2);


    num1 = 4;
    num2 = 2;
    printf("%d+%d =%d\n", num1, num2, num1+num2);
    printf("%d-%d =%d\n", num1, num2, num1-num2);
    printf("%d*%d =%d\n", num1, num2, num1*num2);
    printf("%d/%d =%d\n", num1, num2, num1/num2);
}
