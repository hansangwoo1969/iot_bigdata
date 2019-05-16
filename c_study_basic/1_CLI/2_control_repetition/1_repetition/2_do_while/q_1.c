#include <stdio.h>
// 5개의 정수 입력 받아, 그 수의 합을 구할 것, 
// 조건: 정수는 반드시 1이상, 1미만인 경우 재입력 요구

void main(){
    int input_num;    // 입력받을 정수
    int i=0;
    int total=0;      // 누적 합 
    const int NUM=5;  // 1보다 큰 정수 입력조건 5회

    while (i < NUM){
        
	printf("정수입력: ");
        scanf("%d", &input_num);
       // total += input_num;
	
	while(input_num < 1){
   	    printf("1보다 큰 정수입력: ");
            scanf("%d", &input_num);
        } 
        total += input_num;
	i++;
//	print("누적합: %d", total);
    }

	printf("누적합: %d", total);
}
