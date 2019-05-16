#include <stdio.h>

// 1. 프로그램 사용자로부터 양의 정수를 하나 입력 받아서 ,
// 그 수 만큼 3의 배수 출력 (ex, 5입력시 3 6 9 12 15)

void main(){
    int input_num=0;
    int i=1;
    const int TRIPLE = 3;
    

    printf("양의 정수를 입력하세요: ");
    scanf("%d", &input_num);

    while (i<=input_num){
	printf("  %d" , TRIPLE * i);
	i++;
    }
}
