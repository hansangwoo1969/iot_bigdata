#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)
struct point{
	char name[20];
	int xpos;
	int ypos;
};

struct circle {
	double radius;
	struct point* center;
};

void main(){
	
	struct point cen = { 2,7 };
	double rad = 5.5;

	struct circle ring = { rad, &cen };
	printf("���� ������: %g \n ", ring.radius);
	printf("���� �߽�[%d, %d] \n ", (ring.center)->xpos, (ring.center)->ypos );

	return 0;
}
