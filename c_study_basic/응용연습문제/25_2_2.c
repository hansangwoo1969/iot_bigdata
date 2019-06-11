/* 메모리공간의 동적할당
1. 사용자로 부터 -1이 될 때까지 정수입력 받아, 프로그램 종료직전에 입력받은 정수 전부를 순서대로 출력
2. 몇 개의 정수를 입력받는지 모른다. 힙 영역 사용
3. 일단은 길이가5인 int형 배열을 힙에 할당, 배열이 찰 때마다 길이를 3씩 늘리자 (realloc)
*/

#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#pragma warning (disable:4996)

int main(void) {
	int arrlen = 5;	// 초기배열 길이
	int idx = 0;	// 배열 인덱스
	int i; 
	int* arr = (int*)malloc(sizeof(int) * arrlen);

	while (1)
	{
		printf("정수입력: ");
		scanf("%d", &arr[idx]);
		if (arr[idx] == -1)		// 입력의 종료를 검사
			break;

		if (arrlen == idx + 1)	// 배열의 확장 필요성 검사
		{
			arrlen += 3;
			arr= (int*)realloc(arr, sizeof(int) * arrlen);
		}
		idx++;
	}
	for (i = 0; i < idx; i++)
		printf("%d ", arr[i]);
	
	free(arr);
	return 0;
}
