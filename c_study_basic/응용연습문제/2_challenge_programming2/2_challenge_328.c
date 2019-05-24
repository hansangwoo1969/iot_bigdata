#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int arr[10];         // 입력받는 수의 배열
	int result[10];      // 홀/짝 구분한 결과를 저장하는 배열
	int i;
	int len = 9, j = 0;

	printf("총 10개의 숫자를 입력하세요 \n");
	for (i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &arr[i]);

		//짝수는 좌측, 홀수는 우측
		if (arr[i] % 2 == 0) {
			result[j] = arr[i];
			j++;
		}
		else if (arr[i] % 2 != 0) {
			result[len] = arr[i];
			len--;
		}
	}

	for(i = 0; i < 10; i++) {
		printf("%d ", result[i]);
	}	
	return 0;
	
}
