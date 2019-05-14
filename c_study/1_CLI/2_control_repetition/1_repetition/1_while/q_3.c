#include <stdio.h>

// 1. 양의 정수를계속입력 받아,계속 더해 나감,,
// 0입력시 모든정수의 합을 출력하고 프로그램 종료,,,  대기

void main(){
    int input_num;
    int sum=0;
    
   
    printf("정수를 입력하세요: ");
    scanf("%d", &input_num);

    while (input_num !=0){
	sum += input_num;
        scanf("%d", &input_num);
    }
    
    printf("누적입력값: %d", sum);
}
