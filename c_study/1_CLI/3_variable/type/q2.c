#include <stdio.h>
// 두개의 실수를 입력받아 double 변수에 입력, 두수의 사칙연산결과 도출
void main(){
    double d_num1;
    double d_num2;

    printf("두 개의 실수를 입력하세요: ");
    scanf("%lf %lf", &d_num1, &d_num2);

    printf("\n");
    printf("덧셈");
    printf(" %.2f 더하기 %.2f는 %.0f이다\n", d_num1, d_num2, d_num1+d_num2);

    printf("뺄셈");
    printf(" %.2f 빼기 %.2f는 %.0f이다\n", d_num1, d_num2, d_num1-d_num2);

    printf("곱셈");
    printf(" %.2f 곱하기 %.2f는 %.0f이다\n", d_num1, d_num2, d_num1*d_num2);

    printf("나눗셈");
    printf(" %.2f 나누기 %.2f는 %.2f이다\n", d_num1, d_num2, d_num1/d_num2);
}
