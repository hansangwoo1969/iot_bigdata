#include <stdio.h>
# include <string.h>
#pragma warning(disable:4996)

void main(){
	char my_password[] = "cjdrnr";
	char input_password[] = "cjdrnr";

	if (my_password == input_password)    // �迭�� �ּҰ��� ���ϹǷ� ���� �ʴ�.
		puts("�н����尡 ��ġ�մϴ�.");
	else
		puts("�н����尡 ����ġ �մϴ�.");
}

// ���ڿ��� ������ ���ϰ��� �Ѵٸ�, 
/*
# include <string.h>
int strcmp(const char * s1, const char * s2);
int strncmp(const char * s1, const char * s2, size_t n);
=> �� ���ڿ��� ���� ������ 0, ���� ������ 0�� �ƴѰ��� ��ȯ
	0�� ��ȯ�Ǹ� ������ ���ڿ�, 0�� �ƴ� ���� ��ȯ�Ǹ� �������� ���� ���ڿ�
	���ڿ��� ũ��� ���������� ,,,
*/
