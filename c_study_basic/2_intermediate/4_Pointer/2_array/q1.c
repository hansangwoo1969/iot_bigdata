# include <stdio.h>
// 길이가 5인 int형 배열 arr선언하고 1,2,3,4,5로 초기화하고
// 이 배열의 첫번째 요소를 가리키는 표인터변수ptr을 선언
// ptr에 저장된 값을 2씩 증가시키고 정상적으로 증가가 이루어 졌는지 확인
int main (void){
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr = arr;
	int i;
	for (i=0; i<5; i++){
		*ptr += 2;
		ptr++;
	}

	for (i=0; i<5; i++)
		printf("%d ", arr[i]);

	return 0;
}
