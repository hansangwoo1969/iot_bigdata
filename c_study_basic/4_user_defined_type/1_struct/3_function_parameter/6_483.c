#include <stdio.h>
typedef struct {
	int xpos;
	int ypos;
} Point;

Point AddPoint(Point pos1, Point pos2) {
	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos };
	return pos;
}

// Call by Reference type1: ���ڿ� ���� �ּҰ��� �Ѱ���
// ����: ���ڿ� ���� �޸� ī�� �۾��� �Ͼ�� �ʾƼ�
//       ���α׷� �ӵ�, �޸� ��� ȿ���� ���� �� �ִ�.
Point AddPoint2(Point* pos1, Point* pos2) {
	Point pos = { (pos1->xpos) + (pos2->xpos), (pos1->ypos) + (pos2->ypos) };
	return pos;
}

// Call by Reference type2: ���� �� ��ȯ �������� �Ű������� ó���Ͽ�
//                          �Ѱ���
// ����: ȣ�� �ϴ� �ʿ��� ��ȯ ���� ���� �޸� ī�ǰ� �Ͼ�� �ʾ�
//       ���α׷� �ӵ�, �޸� ��� ȿ���� ���� �� �ִ�.
void AddPoint3(Point* pos1, Point* pos2, Point* pos3) {
	pos3->xpos = (pos1->xpos) + (pos2->xpos);
	pos3->ypos = (pos1->ypos) + (pos2->ypos);
}

// Call by Referenct type3: type2�� �����ϸ� �߰� ������
// ��ȯ���� �����ϸ� �ش� ��ȯ ���� ������ �Լ��� ���������� �����ߴ�����
// ���� �����ڵ带 ������ (�������� ���� ���)
// ex) 0: ���� ����, 1: ���� ���� ����, 2: Segmantation Fault ...
int AddPoint4(Point* pos1, Point* pos2, Point* pos3) {
	pos3->xpos = (pos1->xpos) + (pos2->xpos);
	pos3->ypos = (pos1->ypos) + (pos2->ypos);

	return 0;
}

Point MinPoint(Point pos1, Point pos2) {
	Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return pos;
}

Point MinPoint2(Point* pos1, Point* pos2) {
	Point pos = { (pos1->xpos) - pos2->xpos, (pos1->ypos) - (pos2->ypos) };
	return pos;
}

Point MinPoint3(Point pos1, Point pos2) {
	Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return pos;
}

void main() {
	Point pos1 = { 5,6 };
	Point pos2 = { 2,9 };
	Point result;

	printf("Call by Value Style\n");
	result = AddPoint(pos1, pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	result = MinPoint(pos1, pos2);
	printf("[%d, %d] \n\n", result.xpos, result.ypos);

	printf("Call by Reference Style 1\n");
	result = AddPoint2(&pos1, &pos2);
	printf("[%d, %d] \n", result.xpos, result.ypos);
	result = MinPoint2(&pos1, &pos2);
	printf("[%d, %d] \n\n", result.xpos, result.ypos);

	printf("Call by Reference Style 2\n");
	AddPoint3(&pos1, &pos2, &result);
	printf("[%d, %d] \n", result.xpos, result.ypos);
}
