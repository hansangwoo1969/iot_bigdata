// Declaration(����) PART 1
// include ����, ��ó�� #define, ��������, �Լ�����(Function prototype)
#include <stdio.h>
int num = 0;

// Function(�Լ�) PART 2
// Ư�� ����� �����ϴ� �Լ� ���Ǻ�
// �Լ��� ���(����) �� SIZE�� ���� �������� ���Ϸ� ������ �����ϴ�
void Increment(void) {
	num++;
}

int GetNum(void) {
	return num;
}

// Controller PART 3
// main ��ü ���α׷��� ���������� ������ �������� ��Ʈ�ѷ��� ������ �����Ѵ�
void main(void) {

	printf("num: %d \n", GetNum());
	Increment();
	printf("num: %d \n", GetNum());
	Increment();
	printf("num: %d \n", GetNum());
	
}
