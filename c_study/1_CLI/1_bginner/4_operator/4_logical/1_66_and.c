#include <stdio.h>
/* �� AND ����ǥ
 * A���� B���� ���
 * ����  ����  ����
 * ��    ����  ����
 * ����  ��    ����
 * ��    ��    ��
*/

void main(){
    int num1=10, num2=12, result;

    printf("\n");
    printf("num1: %d, num2: %d \n", num1, num2);
    printf("========================================\n");
    // ���� && ����
    result = (num1 == 0 &&  num2 == 1);
    printf(" (num1 == 0 &&  num2 == 1)    => �򰡰��: %d\n", result);
    
    // �� && ����
    result = (num1 == 10 &&  num2 == 1);
    printf(" (num1 == 10 &&  num2 == 1)   => �򰡰��: %d\n", result);
    
    // ���� && ��
    result = (num1 == 1 &&  num2 == 12);
    printf(" (num1 == 1 &&  num2 == 12)   => �򰡰��: %d\n", result);
    
    // �� && ��
    result = (num1 == 10 &&  num2 == 12);
    printf(" (num1 == 10 &&  num2 == 12)  => �򰡰��: %d\n", result);
    


}
