#include <stdio.h>

void main(){
	int year=0;            // 수감년도
	int sentence_year=20;  // 구형량
	int jailbreak_year=7;  // 탈옥가능 년도
	int physical_level=0;  // 체력


	printf("%d년 형량을 받아 입소합니다. \n", sentence_year);
	while (1) {
		year++;
		if (year % 2 == 0) {
	        	physical_level++; 
		}
		printf("%d년 콩밥 먹었습니다. 체력: %d \n", year, physical_level);
		if (year > jailbreak_year){
			printf("탈출시도!\n\n");
			if (physical_level > 5){
				break;
			}
		}
	}
	printf("탈출 성공 !!! \n");
}
