#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

// 구조체: 하나 이상의 변수(포인트 변수와 배열 포함)를 묶어서 새로운 자료형을 정의하는 도구
// 구조체변수의 이름.구조체멤버의 이름

struct point{		// 구조체 point의 정의
	int xpos;
	int ypos;
};


void main(){
	struct point pos1, pos2;    // 구조체 변수 선언
	double distance;

	fputs("point1 pos: ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("point2 pos: ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	distance = sqrt((double)((pos1.xpos-pos2.xpos)* (pos1.xpos - pos2.xpos)
		+ (pos1.ypos - pos2.ypos)* (pos1.ypos - pos2.ypos)));

	printf("두 점의 거리는 %g 입니다.\n", distance);
	return 0;

}
