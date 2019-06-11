#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)
struct point{
	int xpos;
	int ypos;
};

void main(){
	
	struct point arr[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("점의 좌표 입력: ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);//구조체 변수의 멤버를 대상으로 scanf호출
	}

	for (i = 0; i < 3; i++) {
		// 구조체 배열을 이루는 구조체 변수에 저장된 값 출력
		printf("[%d, %d] ", arr[i].xpos, arr[i].ypos);
	}
	printf("%d", arr[1].ypos);

	return 0;
}
