#include <stdio.h>
#pragma warning (disable:4996)
/* ������ ���������� ���α׷� �ۼ�
1. ����, ���ڸ�, ���������� ���� ������ ������ �� �ִ� ����ü ����
2. ����ü �迭�� �����ؼ� ���������� ������ �����ϴ� ������ �ۼ�
3. main�Լ����� ����ڷκ��� 3���� ������ ���� ������ �Է¹ް� �Է��� ������, �������� ���
*/

struct library {
	char subject[20];
	char writer[20];
	int pages;
};

int main() {
	struct library arr[3];
	int i;

	// �ڷ��Է�
	for (i = 0; i < 3; i++) {
		printf("����? "); scanf("%s", arr[i].writer);
		printf("����? "); scanf("%s", arr[i].subject);
		printf("������? "); scanf("%d", &arr[i].pages);
	}

	// �Էµ� �ڷ� ���
	printf("===== �Էµ� �ڷ� ���=== \n");
	for (i = 0; i < 3; i++) {
		printf("����: %s\n", arr[i].writer);
		printf("����: %s\n", arr[i].subject);
		printf("������: %d\n", arr[i].pages);
		}

	return 0;
}

