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

	pos2 = pos1;    // pos1�� ��� �� pos2�� ����� ���簡 �����. (�ٸ��ּҿ� ���� ��)
	// ����ü�Ǵ��Կ����� �������� ���ؼ��� �����ϴ�.	
	// pos3 = pos1;
	// ����ü�� ���� ���길 �����ϰ� ��������� ������ ��Ÿ �ٸ�������
	// �������� �ʴ´�.
	// pos2 = pos2 + pos1;
}
