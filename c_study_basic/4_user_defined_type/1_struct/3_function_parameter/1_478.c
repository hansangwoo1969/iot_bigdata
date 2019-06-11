#include <stdio.h>
#pragma warning (disable:4996)

/*
typedef struct point {
	int xpos;
	int ypos;
} Point;
*/
// typedef [기존의 형][새로운 형]

typedef struct {
	int xpos;
	int ypos;
} Point;

// 구조체를 Call by value로 전달한 형태
void ShowPosition(Point pos) {
	printf("전달받은 원본값 [%d, %d] \n", pos.xpos, pos.ypos);
	pos.xpos += 10;
	pos.ypos += 10;
	printf("ShowPosition에서 수정[% d, % d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void) {
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

void main(){
	// 구조체는 대입연산이 가능하다.
	Point curPos = GetCurrentPosition();
	ShowPosition(curPos);

	printf("main함수에서의 좌표 확인 [%d, %d] \n", curPos.xpos, curPos.ypos);

	return 0;
}
