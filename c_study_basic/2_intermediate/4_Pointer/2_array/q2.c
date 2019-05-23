# include <stdio.h>
// 포인터변수 ptr에 저장된 값을 변경시키지 않고 ptr을 대상으로 덧셈연산하여
// 그 결과로 반환되는 주소값을 통해서 모든 배열요소에 접근하여 값을 
// 2씩 증가시키는 예제 작성

int main (void){
	int arr[5] = {1, 2, 3, 4, 5};
	int *ptr = arr;
	int i;
	for (i=0; i<5; i++){
		*(ptr + i) += 2;
	}

	for (i=0; i<5; i++)
		printf("%d ", arr[i]);

	return 0;
}
