#include <stdio.h>
#pragma warning (disable:4996)

// ��� ���
void main() {
// ���̰� 5�� int�� �迭�� �����ؼ� 5���� �����Է¹ް�,
// MAX, min, sum�� ���Ұ�
// ��, �ݵ�� �Է��� �Ϸ��� ���¿��� �ִ�, �ּҰ�, �׸��� ������ ����ؾ�..
	int i, max, min, sum, temp;
//	const int NUM = 5;
	double avg;
	int arr[5];
//	max = min = sum = arr[0];

	for (i = 0; i < 5; i++) {
		printf("������ �Է��ϼ���: ");
		scanf("%d", &arr[i]);
	}
	max = min = sum = arr[0];

	// �ִ밪 ���ϱ�
	for (i = 0; i < 5; i++) {
		if (arr[i] > max) {
			temp = max;
			max = arr[i];
			arr[i] = temp;
		}
	}
	// �ּҰ� ���ϱ�
	for (i = 0; i < 5; i++) {
		if (arr[i] < min) {
			temp = min;
			min = arr[i];
			arr[i] = temp;
		}
	}
	for (i = 0; i < 5; i++) {
		sum += arr[i]; 
	}
	printf("�հ�: %d", sum);
	avg = sum / 5;
	printf("�ִ�: %d, �ּҰ�: %d, ���: %f", max, min, avg);
}

 

// ������ ����
/*
int main (){
	int arr[5];
	int max, min, sum, i;

	for (i=0; i<5;i++)
	{
		printf("�Է�: ");
		scanf("%d", &arr[i]);
	}

	max = min = sum = arr[0];
	for (i=0; i<5; i++)
	{
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("�ִ밪: %d \n", max);
	printf("�ּҰ�: %d \n", min);
	printf("�� ��: %d \n",sum);
	return 0;

}
*/
