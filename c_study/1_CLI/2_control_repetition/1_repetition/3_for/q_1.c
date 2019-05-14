#include <stdio.h>

// 두 개의 정수를 입력 받아, 두 정수를 포함하여 
// 그사이에 존재하는 정수들의 합을 출력하는 프로그램 작성(ex_ 3과 5입력, 3+4+5)
// 단, start_num <= end_num

void main(){
    int start_num; // 첫번째 수
    int end_num;   // 두번째 수
    int sum=0;     // 누적 합
    int i =0;      // 변수

    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d",&start_num, &end_num);

    for(i = start_num; i <= end_num; i++){
	sum += i;
    }
    printf("%d 와 %d 사이의합: %d \n", start_num, end_num, sum);
}
