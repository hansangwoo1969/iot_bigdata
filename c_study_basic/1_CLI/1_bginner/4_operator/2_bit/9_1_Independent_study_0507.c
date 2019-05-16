#include <stdio.h>

int main(void){
    char ch=9;
    int inum=1052;
    double dnum=3.1415;

    printf("변수 ch의 크기: %d \n", sizeof(ch));
    printf("변수 inum의 크기: %d \n", sizeof(inum));
    printf("변수 dnum의 크기: %d \n", sizeof(dnum));
    

}

/*
int main(void){
    int num=3;

    num = num << 3;
    num = num >> 2;

    printf("%d \n", num);
    return 0;
}
*/

/*
int main (void){
    int num;

    printf("숫자를 입력하세요: ");
    scanf("%d", &num);
    num = ~num;
    printf("부호변경된 숫자: %d", (num + 1));
}
*/

// BitLeftShift
/*int main(void){
    int num = 15;
    int result1 = num << 1;
    int result2 = num << 2;
    int result3 = num << 3;

    printf("1칸 이동 결과: %d \n", result1);
    printf("2칸 이동 결과: %d \n", result2);
    printf("3칸 이동 결과: %d \n", result3);

    int number = -16;
    int result4 = number >> 1;
    int result5 = number >> 2;
    int result6 = number >> 3;

    printf("1칸 이동 결과: %d \n", result4);
    printf("2칸 이동 결과: %d \n", result5);
    printf("3칸 이동 결과: %d \n", result6);
}
*/


//BitNotOperation
/*
int main(void){
    int num1 = 15;
    int num2 = ~num1;

    printf("NOT연산의 결과: %d \n", num2 + 1);
    return 0;
}
*/

// float error
/*int main(void){
    int i;
    float num = 0.0;

    for (i=0; i <100; i++){
	num += 0.1;
    }
    printf("0.1을 100번 더한결과: %f\n", num);
    return 0;
}
*/

// 85p 
/* notation.c 
int main(void){
    int num1 = 0xA7, num2 = 0x43;
    int num3 = 032, num4=024;

    printf("0xA7의 10진수 정수값:  %d\n", num1);
    printf("0x43의 10진수 정수값:  %d\n", num2);
    printf("043의 10진수 정수값:  %d\n", num3);
    printf("023의 10진수 정수값:  %d\n", num4);

    printf("%d - %d = %d \n", num1, num2, num1-num2);
    printf("%d + %d = %d \n", num3, num3, num3-num4);


}
*/
