#include <stdio.h>
void ShowArray2DStyle(int (*arr)[4], int column){
	int i,j;
	for (i=0; i<column;i++){
		for (j=0;j<4;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int Sum2DArr(int arr[][4], in column){
	int i, j, sum=0;
	for (i=0; i<column;i++)
		for (j=0'j<4;j++)
			sum += arr[i][j];
	return 0;
}

int main(){
	int arr1[2][4]={1,2,3,4,5,6,7,8};
	int arr2[3][4]={1,1,1,1,2,2,2,2,3,3,3,3};
	

	ShowArr2DStyle(arr1, sizeof(arr1)/ sizeof(arr1[0]));
	ShowArr2DStyle(arr2, sizeof(arr2)/ sizeof(arr2[0]));

	printf("arr1의 합: %d \n", Sum2DArr(arr1, sizeof(arr1)/sizleof(arr1[0])));
	printf("arr2의 합: %d \n", Sum2DArr(arr2, sizeof(arr2)/sizleof(arr2[0])));




	return 0;
}
