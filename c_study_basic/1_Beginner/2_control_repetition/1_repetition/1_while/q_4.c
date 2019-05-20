#include <stdio.h>

// 1. 양의 정수를계속입력 받아 구구단 역순으로 출력

void main(){
    int dan;
    int i=9;
   
    
    printf("정수를 입력하세요: ");
    scanf("%d", &dan);

    while (i > 0){
	printf("%d x %d = %d \n", dan, i, dan * i);
        i--;
	}
}
