#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)
struct point{
	int xpos;
	int ypos;
};

void main(){
	
	struct point arr[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("���� ��ǥ �Է�: ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);//����ü ������ ����� ������� scanfȣ��
	}

	for (i = 0; i < 3; i++) {
		// ����ü �迭�� �̷�� ����ü ������ ����� �� ���
		printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);
	}
	printf("%d", arr[1].ypos);

	return 0;
}
