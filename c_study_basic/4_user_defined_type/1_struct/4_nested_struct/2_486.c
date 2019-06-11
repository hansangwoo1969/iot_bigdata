#include <stdio.h>
#pragma warning (disable:4996)

typedef struct point {
	int xpos;
	int ypos;
} Point;

typedef struct circle {
	Point cen;
	double rad;
} Circle;

void ShowCircleInfo(Circle* cptr){
	// cptr이 주소이기 때문에 아래는 불가능한 문법
	// cptr.cen
	// (cptr->cen)->xpos;
	// cptr->cen->xpos;
	printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g \n\n", cptr->rad);
}

int main(void){

	Circle c1 = { {1,2},3.5 };
	Circle c2 = { 2, 4, 3.5 };

	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);

	// c1은 주소가 아니기 때문에 ->가 성립하지 않는다
	// c1->rad;
	// c1.cen->

	// 가능한 문법
	c1.rad;
	c1.cen.xpos;
	c1.cen.ypos;

	return 0;
}
