#include <stdio.h>
#pragma warning (disable:4996)

typedef struct point {
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point* ptr1, Point* ptr2) {
	Point temp = *ptr1;  // Point변수 통으로 자리이동 가능,,,
	*ptr1 = *ptr2;
	*ptr2 = temp;

/*  // 구조체 멤버별로 교체해야 하는 걸로 착각함,,, 개념을 분명히 할 것,,
	Point* temp; 
	temp->xpos = ptr1->xpos;
	temp->ypos = ptr1->ypos;

	ptr1->xpos = ptr2->xpos;
	ptr1->ypos = ptr2->ypos;

	ptr2->xpos = temp->xpos;
	ptr2->ypos = temp->ypos;
	*/
}
int main(){

	Point pos1 = { 2, 4 };
	Point pos2 = { 5, 7 };

	SwapPoint(&pos1, &pos2);
	printf("[%d, %d] \n", pos1.xpos, pos1.ypos);
	printf("[%d, %d] \n", pos2.xpos, pos2.ypos);

	return 0;
}
