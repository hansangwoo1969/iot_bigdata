#include <stdio.h>

// factorial ���

void main(){
    int input_num;   // �Է¹��� ����
    int i;           // ����
    int factorial=1; // ���丮�� ���

    printf("���� �Է� �ϼ��� ");
    scanf(" %d", &input_num);

    for (i=1; i<=input_num; i++){
	factorial *= i;
    }
    printf("\n%d! (Factorial) result = %d \n", input_num, factorial);
}
