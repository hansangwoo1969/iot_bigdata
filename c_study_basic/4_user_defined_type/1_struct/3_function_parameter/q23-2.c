#include <stdio.h>
#pragma warning (disable:4996)

//ÁÂÇ¥Æò¸é: ÁÂÇÏ´ÜÀÇ x, yÁÂÇ¥ [0,0], ¿ì»ó´ÜÀÇ x,yÁÂÇ¥ [100,100]
// 

typedef struct point {
	int xpos;
	int ypos;
} Point;

typedef struct rectangle {
	Point ul;   //ÁÂ »ó´Ü
	Point lr;   //¿ì ÇÏ´Ü
} Rectangle;

void ShowRecArea(Rectangle rec) {
	printf("³ÐÀÌ: %d \n",
		(rec.lr.xpos - rec.ul.xpos) * (rec.lr.ypos - rec.ul.ypos));
}

void ShowRecPos(Rectangle rec) {
	printf("ÁÂ »ó´Ü: [%d, %d] \n", rec.ul.xpos, rec.ul.ypos);
	printf("ÁÂ ÇÏ´Ü: [%d, %d] \n", rec.ul.xpos, rec.lr.ypos);
	printf("¿ì »ó´Ü: [%d, %d] \n", rec.lr.xpos, rec.ul.ypos);
	printf("¿ì ÇÏ´Ü: [%d, %d] \n", rec.lr.xpos, rec.lr.ypos);
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
