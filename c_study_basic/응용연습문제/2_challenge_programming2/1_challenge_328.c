#include <stdio.h>
#pragma warning (disable:4996)


void find_odd(int* arr, int len);
void find_even(int* arr, int len);



int main() {
	int arr[10];
	int i = 0, len = 0;

	printf("�� 10���� ���ڸ� �Է��ϼ��� \n");
	for (i = 0; i < 10; i++) {
		printf("�Է�: ");
		scanf("%d", &arr[i]);
	}


	len = sizeof(arr) / sizeof(int);
	find_even(arr, len);
	find_odd(arr, len);
	return 0;
}

void find_even(int* ptr, int size) {
	int i;
	printf("\n ¦�� ����:===\n");

	for (i = 0; i < 10; i++) {
		if (ptr[i] % 2 == 0)
			printf("%d ", ptr[i]);

	}
}

void find_odd(int* ptr, int size) {
	int i;
	printf("\n Ȧ�� ����:===\n");

	for (i = 0; i < 10; i++) {
		if (ptr[i] % 2 != 0)
			printf("%d ", ptr[i]);

	}
}
