#include <stdio.h>

int main(void){
    char ch=9;
    int inum=1052;
    double dnum=3.1415;

    printf("���� ch�� ũ��: %d \n", sizeof(ch));
    printf("���� inum�� ũ��: %d \n", sizeof(inum));
    printf("���� dnum�� ũ��: %d \n", sizeof(dnum));
    

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

    printf("���ڸ� �Է��ϼ���: ");
    scanf("%d", &num);
    num = ~num;
    printf("��ȣ����� ����: %d", (num + 1));
}
*/

// BitLeftShift
/*int main(void){
    int num = 15;
    int result1 = num << 1;
    int result2 = num << 2;
    int result3 = num << 3;

    printf("1ĭ �̵� ���: %d \n", result1);
    printf("2ĭ �̵� ���: %d \n", result2);
    printf("3ĭ �̵� ���: %d \n", result3);

    int number = -16;
    int result4 = number >> 1;
    int result5 = number >> 2;
    int result6 = number >> 3;

    printf("1ĭ �̵� ���: %d \n", result4);
    printf("2ĭ �̵� ���: %d \n", result5);
    printf("3ĭ �̵� ���: %d \n", result6);
}
*/


//BitNotOperation
/*
int main(void){
    int num1 = 15;
    int num2 = ~num1;

    printf("NOT������ ���: %d \n", num2 + 1);
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
    printf("0.1�� 100�� ���Ѱ��: %f\n", num);
    return 0;
}
*/

// 85p 
/* notation.c 
int main(void){
    int num1 = 0xA7, num2 = 0x43;
    int num3 = 032, num4=024;

    printf("0xA7�� 10���� ������:  %d\n", num1);
    printf("0x43�� 10���� ������:  %d\n", num2);
    printf("043�� 10���� ������:  %d\n", num3);
    printf("023�� 10���� ������:  %d\n", num4);

    printf("%d - %d = %d \n", num1, num2, num1-num2);
    printf("%d + %d = %d \n", num3, num3, num3-num4);


}
*/
