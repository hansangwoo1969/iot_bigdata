#include <stdio.h>
// �ΰ��� �Ǽ��� �Է¹޾� double ������ �Է�, �μ��� ��Ģ������ ����
void main(){
    double d_num1;
    double d_num2;

    printf("�� ���� �Ǽ��� �Է��ϼ���: ");
    scanf("%lf %lf", &d_num1, &d_num2);

    printf("\n");
    printf("����");
    printf(" %.2f ���ϱ� %.2f�� %.0f�̴�\n", d_num1, d_num2, d_num1+d_num2);

    printf("����");
    printf(" %.2f ���� %.2f�� %.0f�̴�\n", d_num1, d_num2, d_num1-d_num2);

    printf("����");
    printf(" %.2f ���ϱ� %.2f�� %.0f�̴�\n", d_num1, d_num2, d_num1*d_num2);

    printf("������");
    printf(" %.2f ������ %.2f�� %.2f�̴�\n", d_num1, d_num2, d_num1/d_num2);
}
