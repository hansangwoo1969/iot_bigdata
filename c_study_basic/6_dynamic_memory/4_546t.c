#include <stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)

int main(void) {

	int number_of_input;
	int* number_warehouse;
	int index;
	int total = 0;

	printf("전체 입력 개수를 설정하세요: ");
	scanf("%d", &number_of_input);
		   	 
	number_warehouse = (int *)malloc(sizeof(int) * number_of_input);

	// warehouse 요소 입력
	for (index = 0; index < number_of_input; index++) {
		printf("수를 입력하세요: ");
		scanf("%d", &(number_warehouse[index]));
	}

	// warehouse 요소 출력
	for (index = 0; index < number_of_input; index++) {
		total = total + number_warehouse[index];
		printf("입력%d] %d ", index+1, number_warehouse[index]);
	}

	printf("총합: %d", total);
	free(number_warehouse);

	return 0;
}
