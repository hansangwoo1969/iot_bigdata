#include <stdio.h>
#pragma warning (disable:4996)

//��ǥ���: ���ϴ��� x, y��ǥ [0,0], ������ x,y��ǥ [100,100]
// 

typedef struct point {
	int xpos;
	int ypos;
} Point;

typedef struct rectangle {
	Point ul;   //�� ���
	Point lr;   //�� �ϴ�
} Rectangle;

void ShowRecArea(Rectangle rec) {
	printf("����: %d \n",
		(rec.lr.xpos - rec.ul.xpos) * (rec.lr.ypos - rec.ul.ypos));
}

void ShowRecPos(Rectangle rec) {
	printf("�� ���: [%d, %d] \n", rec.ul.xpos, rec.ul.ypos);
	printf("�� �ϴ�: [%d, %d] \n", rec.ul.xpos, rec.lr.ypos);
	printf("�� ���: [%d, %d] \n", rec.lr.xpos, rec.ul.ypos);
	printf("�� �ϴ�: [%d, %d] \n", rec.lr.xpos, rec.lr.ypos);
}


int main(){

	Rectangle rec1 = { {1,1},{4,4} };
	Rectangle rec2= { {0,0},{7,5} };
	ShowRecArea(rec1);
	ShowRecPos(rec1);
	ShowRecArea(rec2);
	ShowRecPos(rec2);

	return 0;
}
