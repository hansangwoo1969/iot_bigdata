#include <stdio.h>

void main(){	
   // int input_number;

    //printf("숫자를 입력하세요: ");
    //scanf("%d", &input_number);
    
    //printf("당신이 입력한 숫자는 %d 입니다.\n", input_number);
    //printf("============================\n");


    int first_num;
    int second_num;
   

    printf("첫번째 숫자를 입력하세요: ");
    scanf("%d", &first_num);

    printf("두번째 숫자를 입력하세요: ");
    scanf("%d", &second_num);

    printf("%d + %d = %d\n", first_num, second_num, first_num+second_num);
    printf("%d - %d = %d\n", first_num, second_num, first_num-second_num);
    printf("%d * %d = %d\n", first_num, second_num, first_num*second_num);
    printf("%d / %d = %d\n", first_num, second_num, first_num/second_num);
    printf("%d %% %d= %d\n", first_num, second_num, first_num%second_num);



}
