#include <stdio.h>
#define HIT_NUM 2
#pragma warning (disable:4996)


int main(void) {

#if HIT_NUM == 1
	puts("매크로 상수 HHIT_NUM은 현재 5입니다.");
#else
	puts("매크로 상수 HHIT_NUM은 현재 5가 아닙니다.");
#endif 
	return 0;
}
