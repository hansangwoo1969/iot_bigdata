
#include <stdio.h>
void main(){
	
 	printf("/* 2019년 5월 1일 복습 */\n");
        printf("// ANSI 89 style 주석\n");
	printf("printf(\"문자열\"); <== 기본문법 \n\n");

	printf("print(\"%%[Format string]\", 값)\n");
	//printf("%s ("%%[%s]",%s)\n", print, Format string, 값);
	//printf("printf (%% [%s],값)", Format string);
	printf("현재 온도: %d도, 오존지수: %3f, 정확도: %d%%\n\n",22,0.075,99);

	// 전체 공간: 4 + 16 + 12 = 32
        printf("순위\t     영화명\t      변동폭\n");
		// 16개의 공간 사용
	printf("  1\t어벤저스엔드게임\t -0\n");
	printf("  2\t캡틴마블\t\t -0\n");
	printf("  3\t생일\t\t\t +1\n");
	printf("  4\t미성년\t\t\t -1\n");
}

