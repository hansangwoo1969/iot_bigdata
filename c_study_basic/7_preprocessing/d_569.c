#include <stdio.h>
#define HIT_NUM 2
#pragma warning (disable:4996)


int main(void) {

#if HIT_NUM == 1
	puts("��ũ�� ��� HHIT_NUM�� ���� 5�Դϴ�.");
#else
	puts("��ũ�� ��� HHIT_NUM�� ���� 5�� �ƴմϴ�.");
#endif 
	return 0;
}
