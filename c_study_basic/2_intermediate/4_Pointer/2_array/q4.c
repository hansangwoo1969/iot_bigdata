# include <stdio.h>
// 길이가 6인 int형 배열 arr을 선언하고 1,2,3,4,5,6 으로 초기화 하고,
// 배열에 저장된 값의 순서가 6,5,4,3,2,1이 되도록 변경하는 예제,

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
