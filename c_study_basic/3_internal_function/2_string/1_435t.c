#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

// strlen�Լ�: ���ڷ� ���޵� ���ڿ��� ���� ��ȯ
// size_t strlen(const char * s)  => ���ڿ��� ���̸� ��ȯ�ϵ�, �� ���ڴ� ���̿� ���Ծ���


void main(){

	char str[] = "1234567";       
	char str2[100];
	char* str3 = "Hello World!";

	scanf("%s", str2);    // �迭��ü�� �ּҶ� &�����ڴ� �ʿ����
	printf("%s strlen(str): %u \n",str, strlen(str));
	printf("%s strlen(str2): %u \n",str2, strlen(str2));
	printf("%s strlen(str3): %u \n", str3, strlen(str3));

}
