#include <stdio.h>

// while문과 do while문 비교하는 코드

void main(){
    int total=0, input_num=0;

/*  // do while 문 =====
    do{
	printf("정수 입력(0 to quit): ");
	scanf("%d", &input_num);
	total = total + input_num;
    }while (input_num != 0);

    printf("합계: %d \n", total);
*/

    // while문 =========
    printf("정수입력: ");
    scanf("%d", &input_num);
    while (input_num !=0){
	    total = total  + input_num;
            scanf("%d", &input_num);
    }

    printf("합계: %d \n", total);




}
