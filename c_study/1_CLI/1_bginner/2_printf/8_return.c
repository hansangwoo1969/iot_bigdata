#include <stdio.h>

// printf�Լ��� ������Ÿ��(proto type)
// int printf( const char *format [, argument]...);
// ���ϰ��� ������� ���� ��쿡�� �����ص� ����ϴµ��� ������ ����.

void main(){
	int result=0;

	// printf �Լ��� ���ϰ��� ��µ� ��ü ����Ʈ ���� ����
	result = printf("1234567\n");
	printf("\"1234567\\n \" printf�� ��� %d\n", result);

	result = printf("abcD\n");
	printf("\"abcD\\n\" printf�� ��� %d\n", result);

	result = printf("!@#$%^\n");
	printf("\"!@#$%^\\n\" printf�� ��� %d\n", result);

	result = printf("�����ٶ�\n");
	printf("\"�����ٶ�\\n\" printf�� ��� %d\n", result);




}
