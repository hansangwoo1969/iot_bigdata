#include <stdio.h>

// 0이상 100이하의 정수중에서 짝수의 합을 출력, 
// do while문으로,, 결과는 2550

void main(){
    int num = 1;  // 100이하의 정수 범위
    int sum = 0;  // 누적합
    int even = 0; // 짝수
    
    do{
	even = num * 2;
	sum += even;
	num++;
        //printf("100까지의 누적합: %d \n", sum); 
    }while(0<= num && num <=50);
    
  printf("100까지의 누적합: %d \n", sum); 
     
}
