/* �޸𸮰����� �����Ҵ�
1. ����ڷ� ���� -1�� �� ������ �����Է� �޾�, ���α׷� ���������� �Է¹��� ���� ���θ� ������� ���
2. �� ���� ������ �Է¹޴��� �𸥴�. �� ���� ���
3. �ϴ��� ���̰�5�� int�� �迭�� ���� �Ҵ�, �迭�� �� ������ ���̸� 3�� �ø��� (realloc)
*/

#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
#pragma warning (disable:4996)

int main(void) {
	int arrlen = 5;	// �ʱ�迭 ����
	int idx = 0;	// �迭 �ε���
	int i; 
	int* arr = (int*)malloc(sizeof(int) * arrlen);

	while (1)
	{
		printf("�����Է�: ");
		scanf("%d", &arr[idx]);
		if (arr[idx] == -1)		// �Է��� ���Ḧ �˻�
			break;

		if (arrlen == idx + 1)	// �迭�� Ȯ�� �ʿ伺 �˻�
		{
			arrlen += 3;
			arr= (int*)realloc(arr, sizeof(int) * arrlen);
		}
		idx++;
	}
	for (i = 0; i < idx; i++)
		printf("%d ", arr[i]);
	
	free(arr);
	return 0;
}
