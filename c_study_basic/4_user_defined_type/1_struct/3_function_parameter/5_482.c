#include <stdio.h>
#pragma warning (disable:4996)

typedef struct point {
	int xpos;
	int ypos;
} Point;
/*
typedef struct point {
	char name[20];
	int xpos;
	int ypos;
} Point2;
*/
void main(){

	Point pos1 = { 1, 2 };
	Point pos2;
	Point pos3;
	int arr[2] = { 1,2 };

	pos2 = pos1;    // pos1의 멤버 대 pos2의 멤버간 복사가 진행됨. (다른주소에 같은 값)
	// 구조체의대입연산은 같은형에 대해서만 가능하다.	
	// pos3 = pos1;
	// 구조체는 대입 연산만 가능하고 산술연산을 포함한 기타 다른연산은
	// 지원하지 않는다.
	// pos2 = pos2 + pos1;
}
