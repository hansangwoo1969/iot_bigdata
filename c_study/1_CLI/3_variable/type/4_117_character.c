#include <stdio.h>
// ����: c���� ���� ǥ���ϱ�
// typedef char LG_small_int;

void main(){
    char c_A=65;
    // ���ڸ� ǥ���� �� �ִ� ��� Ÿ������ �ƽ�Ű�ڵ��ǹ��ڸ� ����� �� �ִ�
    // ������ �̴� 100%�ǹ̰� ����.
    // �ƽ�Ű �ڵ�� 32~126���� ǥ���Ǳ� ������ �������� ���� Ÿ����
    // char�� ����� ǥ�� �����ϱ� �����̴�.
    int i_A=65;
    char c_B=66;
    char c_Z=90;
    char c_a=97;
    char c_special=38;
    char c_7=55;
    char c_k=74;


    printf("\n");
    printf("c_A�� ������ ������: %d\n", c_A);
    printf("c_A�� ������ ���ڰ�: %c\n", c_A);
    printf("i_A�� ������ ���ڰ�: %c\n", i_A);
    printf("c_A�� ������ ���ڰ�: %c\n", c_A);
    printf("c_Z�� ������ ���ڰ�: %c\n", c_Z);
    printf("c_a�� ������ ���ڰ�: %c\n", c_a);
    printf("c_k�� ������ ���ڰ�: %c\n", c_k);
    printf("ASCII 38 ���ڰ�: %c\n", c_special);
    printf("ASCII 55(���� 7) ���ڰ�: %c\n", c_7);

}
