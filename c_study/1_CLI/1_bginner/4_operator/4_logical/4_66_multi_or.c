#include <stdio.h>
/* �� OR ����ǥ
 * A���� B���� C����  ���
 * ����  ����   ����  ����
 * ����  ����   ��    ��
 * ����   ��    ����  ��
 * ����   ��    ��    ��
 * ��	 ����  ����   ��
 * ��    ����  ��     ��	
 * ��    ��    ����   ��
 * ��    ��    ��     ��
*/

void main(){
    int num1=10, num2=12, num3=13, result;

    printf("\n");
    printf("num1: %d, num2: %d, num3: %d \n", num1, num2, num3);
    printf("========================================\n");
    // ���� || ���� || ����
    result = (num1 == 0 || num2 == 1 || num3 == 1);
    printf(" (num1 == 0 || num2 == 1 || num3 == 1)     => �򰡰��: %d\n", result);
    
    // ���� || ���� || ��
    result = (num1 == 0 || num2 == 1 || num3 == 13);
    printf(" (num1 == 0 || num2 == 1 || num3 == 13)    => �򰡰��: %d\n", result);
    
    // ���� || �� || ����
    result = (num1 == 0 || num2 == 12 || num3 == 1);
    printf(" (num1 == 0 || num2 == 12 || num3 == 1)    => �򰡰��: %d\n", result);

    // ���� || �� || ��
    result = (num1 == 0 || num2 == 12 || num3 == 13);
    printf(" (num1 == 0 || num2 == 12 || num3 == 13)   => �򰡰��: %d\n", result);

    // �� || ���� || ����
    result = (num1 == 10 || num2 == 1 || num3 == 1);
    printf(" (num1 == 10 || num2 == 1 || num3 == 1)    => �򰡰��: %d\n", result);

    // �� || ���� || ��
    result = (num1 == 10 || num2 == 1 || num3 == 13);
    printf(" (num1 == 10 || num2 == 1 || num3 == 13)   => �򰡰��: %d\n", result);

    // �� || �� || ����
    result = (num1 == 10 || num2 == 12 || num3 == 1);
    printf(" (num1 == 10 || num2 == 12 || num3 == 1)   => �򰡰��: %d\n", result);

    // �� || �� || ����
    result = (num1 == 10 || num2 == 12 || num3 == 13);
    printf(" (num1 == 10 || num2 == 12 || num3 == 13)   => �򰡰��: %d\n", result);





}
