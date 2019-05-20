#include <stdio.h>

// factorial 계산

void main(){
    int input_num;   // 입력받은 변수
    int i;           // 변수
    int factorial=1; // 팩토리얼 결과

    printf("정수 입력 하세요 ");
    scanf(" %d", &input_num);

    for (i=1; i<=input_num; i++){
	factorial *= i;
    }
    printf("\n%d! (Factorial) result = %d \n", input_num, factorial);
}
