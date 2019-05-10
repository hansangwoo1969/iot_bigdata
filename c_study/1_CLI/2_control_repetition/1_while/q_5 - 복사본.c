#include <stdio.h>

// 입력받은 정수수의 평균을 출력하는 프르그램 작성
// 1. 입력받을 정수의 개수
// 2. 평균값은 소수점 이하까지 계산 

void main(){
    int input_cnt=0; // 하나씩 입력 
    int i=0;       // 입력받을 정수 갯수
    int sum=0;     // 합계
    int j=0;       // 점증하는 정수갯수
   
    printf("입력 받을 정수의갯수를 입력하세요: ");
    scanf("%d \n ", &i);

   // printf("정수를 입력하세요: ");
   // scanf("%d\n", &input_cnt);

    while (j<i){
	scanf("%d", &input_cnt);
//	printf("%d번째 정수 입력",(j+1));
	sum += input_cnt;
	j++;
    }
    
    printf("정수의 합: %d, 양의 정수 갯수: %d, 평균: %lf \n", sum, j, (double)sum/i);
}
