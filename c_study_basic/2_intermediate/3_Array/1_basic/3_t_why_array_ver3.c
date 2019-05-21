#include <stdio.h>
/* 화면요구사항
첫 번째 숫자를 입력하세요: 5
두 번째 숫자를 입력하세요: 5
세 번째 숫자를 입력하세요: 5
네 번째 숫자를 입력하세요: 5
다섯 번째 숫자를 입력하세요: 5
입력한 숫자(입력 순서대로 정렬): 5 5 5 5 5
총합: 25, 평균: 5
세 번째 숫자는 5 입니다.
*/


void main(){
	int number[5], total=0, average, index;
	const int max_count = 5;


	for (index=0; index < max_count; index++){
		printf("%d번째 숫자를 입력하세요: ", index+1);
		scanf("%d", &number[index]);
		total = total + number[index];
	}

	printf("입력한 숫자(입력 순서대로 정렬): ");

	for (index = 0; index < max_count; index++){
		printf("%d ", number[index]);
	}

	average = total / max_count;
	printf("\n 총합: %d, 평균: %d \n",total, average);
	printf("%d번째 숫자는 %d입니다.\n", 3, number[3]);

	printf("다시 조회하고 싶은 수의 순서를 입력하세요: ");
	scanf("%d", &index);
	printf("%d번째 숫자는 %d입니다.", index, number[index-1]);


}
