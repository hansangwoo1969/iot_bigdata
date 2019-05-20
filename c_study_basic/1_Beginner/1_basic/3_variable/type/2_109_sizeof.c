#include <stdio.h>
// sizeof ������: ����� ���� �Ǵ� �������� byte��
int main(){
    // int, char, short  <= ���� Ÿ��(Native Type)
    // typedef char LG_char  <== ����� ���� Ÿ��
    // typedef char LG_small_num  <== ����� ���� Ÿ��
    char c_number=9; // c_ <= �ش纯�� Ÿ���� ������ �� �ִ� prefix�̴�.
    int i_number=1052;
    double d_number=3.1415;
    
    printf("\n");
    // ������ size���ϱ�
    printf("========= ������ size ���ϱ� ===================\n");
    printf("���� c_number�� ũ��: %d\n", sizeof(c_number)); 
    printf("���� i_number�� ũ��: %d\n", sizeof(i_number)); 
    printf("���� d_number�� ũ��: %d\n\n", sizeof(d_number)); 

    // ���� type�� size ���ϱ�
    printf("========= ����type�� size ���ϱ� ===================\n");
    printf("char�� ũ��: %d \n", sizeof(char)); 
    printf("signed char�� ũ��: %d \n", sizeof(signed char)); 
    printf("unsigned char�� ũ��: %d \n\n", sizeof(unsigned char)); 

    printf("int�� ũ��: %d \n", sizeof(int)); 
    printf("signed int�� ũ��: %d\n", sizeof(signed int)); 
    printf("unsigned int�� ũ��: %d\n\n", sizeof(unsigned int)); 
   
    printf("float�� ũ��: %d \n", sizeof(float)); 
    printf("double�� ũ��: %d\n", sizeof(double)); 
    printf("long double�� ũ��: %d\n\n", sizeof(long double)); 
   
    printf("short�� ũ��: %d \n", sizeof(short)); 
    printf("short int�� ũ��: %d \n", sizeof(short int)); 
    printf("short signed int�� ũ��: %d\n", sizeof(short signed int)); 
    printf("short unsigned int�� ũ��: %d\n", sizeof(short unsigned int)); 
}
