#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int arr[10];         // �Է¹޴� ���� �迭
	int result[10];      // Ȧ/¦ ������ ����� �����ϴ� �迭
	int i;
	int len = 9, j = 0;

	printf("�� 10���� ���ڸ� �Է��ϼ��� \n");
	for (i = 0; i < 10; i++) {
		printf("�Է�: ");
		scanf("%d", &arr[i]);

		//¦���� ����, Ȧ���� ����
		if (arr[i] % 2 == 0) {
			result[j] = arr[i];
			j++;
		}
		else if (arr[i] % 2 != 0) {
			result[len] = arr[i];
			len--;
		}
	}

	for(i = 0; i < 10; i++) {
		printf("%d ", result[i]);
	}	
	return 0;
	
}
