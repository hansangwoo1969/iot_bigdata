# include <stdio.h>
// ���̰� 6�� int�� �迭 arr�� �����ϰ� 1,2,3,4,5,6 ���� �ʱ�ȭ �ϰ�,
// �迭�� ����� ���� ������ 6,5,4,3,2,1�� �ǵ��� �����ϴ� ����,

int main (void){
	int arr[6] = {1, 2, 3, 4, 5, 6};
	int *fptr = &arr[0];
	int *bptr = &arr[5];
	int temp, i;

	for (i=0; i<3; i++){
		temp = *fptr;
		*fptr = *bptr;
		*bptr = temp;
		fptr += 1;
		bptr -= 1;
	}

	for (i=0; i<6;i++)
		printf("%d ", arr[i]);

	return 0;
}
