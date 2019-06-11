#include <stdio.h>
#pragma warning (disable:4996)
/* 간단한 도서관리용 프로그램 작성
1. 제목, 저자명, 페이지수에 대한 정보를 저장할 수 있는 구조체 정의
2. 구조체 배열을 선언해서 도서에대한 정보를 저장하는 구조로 작성
3. main함수에서 사용자로부터 3권의 도서에 대한 정보를 입력받고 입력이 끝나면, 도서내용 출력
*/

struct library {
	char subject[20];
	char writer[20];
	int pages;
};

int main() {
	struct library arr[3];
	int i;

	// 자료입력
	for (i = 0; i < 3; i++) {
		printf("저자? "); scanf("%s", arr[i].writer);
		printf("제목? "); scanf("%s", arr[i].subject);
		printf("페이지? "); scanf("%d", &arr[i].pages);
	}

	// 입력된 자료 출력
	printf("===== 입력된 자료 출력=== \n");
	for (i = 0; i < 3; i++) {
		printf("저자: %s\n", arr[i].writer);
		printf("제목: %s\n", arr[i].subject);
		printf("페이지: %d\n", arr[i].pages);
		}

	return 0;
}

