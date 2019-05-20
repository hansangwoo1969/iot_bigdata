#include <stdio.h>

void main(){
    // 사칙연산
    // ex) +, -, *, /   <= operator
    // + 연산자(add, addition, plus)
    // 1+2 수식(expression)의 평가(evaluation)된 결과가 
    // %d 포맷스트링과 매칭이 된다.
    printf("1+2=%d\n", 1+2);

    // - 연산자(sub, subtraction,minus)
    printf("4-2=%d\n", 4-2);

    // * 연산자(mul, multilication)
    printf("4*2=%d\n", 4*2);

    // / 연산자(div, division)
    printf("4/2=%d\n", 4/2);
   
    // 나눗셈 연산 수행시 분모(denominator)가 0일 경우에는  컴파일러에 따라 
    // 컴파일에러 또는 런타임에러를 발생한다.
    // 분자는(nominator)에는 상관이 없음
    // printf("4/0=%d\n", 4/0);

    // 아래 코드는 4/3연산결과(실수)가 일치하지 않는다. 
    // 따라서 컴파일러 종류에 따라 컴파일에러, 런타임에러
    // 또는 나눗셈 결과에서 소수점 이하는 무시된 채로 출력할 수 있다.
    printf("4/3=%d\n",4/3);
    printf("7/3=%d\n",7/3);




    


}

