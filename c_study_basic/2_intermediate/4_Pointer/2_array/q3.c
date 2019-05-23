# include <stdio.h>
// 길이가 5인 int형 배열 arr을 선언하고 1,2,3,4,5로 초기화 하고,
// 이 배열의 마지막 요소를 가리키는 포인터 변수 ptr을 선언,
// 포인터변수 ptr에 저장된 값을 감소시키는 형태의 연산을 기반으로 
// 모든 배열에 접근하여 배열에 저장된 모든 정수를 더하여 결과 출력,

int main (void){
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr = &arr[4];
	int total = 0, i;

	for (i=0; i<5; i++){
		total += *(ptr--);
	}

	printf("%d ", total);

	return 0;
}
