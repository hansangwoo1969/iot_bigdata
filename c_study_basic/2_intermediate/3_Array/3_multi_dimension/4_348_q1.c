#include <stdio.h>
// 가로의 길이가 9, 세로의 길이가 3인 int형 2차원 배열을 선언하여,
// 구구단중 2단, 3단, 4단을 그림과 같이 저장

void main(){
	int arr[3][9];
	int i,j;

	for (i=0;i<3;i++)
		for (j=0;j<9;j++)
			arr[i][j]=(i+2)*(j+1);

	for (i=0; i<3; i++){
		for (j=0; j<9; j++){
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
