#include <stdio.h>

/*
d  : ��ȣ�� �ִ� 10���� ���� (char, short, int�迭)
ld : long
lld: longlong
u  : ��ȣ���� 10���� ����(unsigned int,unsigned short, unsigned char)
f  : float, double
Lf : long double
*/

void main(){
	//int int_max = 2147483647;
	//int int_max_test = 2147483648;
	//signed int sint_max = 2147483647;
	//unsigned uint_max2 = 4294967295;
	//unsigned int uint_max = 4294967295;
	char char_max = 127;
	unsigned char uchar_max = 255;
	short short_max = 32767;
	unsigned short ushort_max = 65535;
	long long_max = 2147483647;
	unsigned long ulong_max = 4294967295;
	long long llong_max = 9223372036854775807;
	unsigned long long ullong_max = 18446744073709551615;
	float float_max = -38;
	double double_max = -308 ;
	//double double_max = 0 ;
        //float n1 = 1.79;
	//float n2 = 10;
        //double double_max = n1*n2^308
	//printf("double�� �ִ밪�� %f\n", double_max);	
//	printf("%f*%f^308=%f\n\n", 1.79, 10, 1.79*10^308);	
        printf("double �ִ밪: %f\n", double_max);
	//printf("int �ִ밪: %d\n", int_max);
	// visual studio 2019 �����Ϸ����� int�� 4byte�� ó���ϱ� ������
	// int Ÿ�����δ� 2,147,483,647�̻��� ���� ǥ���� �� ����.
	//printf("int_max +1: %d\n", int_max_test);
	//printf("signed int�ִ밪: %d\n", sint_max);
	//printf("unsigned int�ִ밪: %u\n", uint_max);
	//printf("unsigned�ִ밪: %u\n", uint_max2);
	printf("char �ִ밪: %d\n", char_max);
	printf("unsignedchar �ִ밪: %u\n", uchar_max);
        printf("short �ִ밪: %d\n", short_max);
	printf("unsignedshort �ִ밪: %u\n", ushort_max);
	printf("long �ִ밪: %ld\n", long_max);
	printf("unsignedlong �ִ밪: %u\n", ulong_max);
	printf("longlong �ִ밪: %lld\n", llong_max);
	printf("unsignedlonglong �ִ밪: %llu\n", ullong_max);
        printf("float �ִ밪: %f\n", float_max);
        printf("double �ִ밪: %f\n", double_max);
        printf("double �ִ밪: %f\n", double_max);
}
