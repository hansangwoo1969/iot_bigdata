#include <stdio.h>
#pragma warning (disable:4996)

// 상우 계산
void main() {
// 길이가 5인 int형 배열을 선언해서 5개의 정수입력받고,
// MAX, min, sum을 구할것
// 단, 반드시 입력을 완료한 상태에서 최댓값, 최소값, 그리고 총합을 계산해야..
	int i, max, min, sum, temp;
//	const int NUM = 5;
	double avg;
	int arr[5];
//	max = min = sum = arr[0];

	for (i = 0; i < 5; i++) {
		printf("정수를 입력하세요: ");
		scanf("%d", &arr[i]);
	}
	max = min = sum = arr[0];

	// 최대값 구하기
	for (i = 0; i < 5; i++) {
		if (arr[i] > max) {
			temp = max;
			max = arr[i];
			arr[i] = temp;
		}
	}
	// 최소값 구하기
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
	printf("합계: %d", sum);
	avg = sum / 5;
	printf("최댓값: %d, 최소값: %d, 평균: %f", max, min, avg);
}

 

// 정답지 내용
/*
int main (){
	int arr[5];
	int max, min, sum, i;

	for (i=0; i<5;i++)
	{
		printf("입력: ");
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
	printf("최대값: %d \n", max);
	printf("최소값: %d \n", min);
	printf("총 합: %d \n",sum);
	return 0;

}
*/
