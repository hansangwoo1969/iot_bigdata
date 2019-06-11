#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

// 문제1의 employee구조체를 기반으로 길이가 3인 배열 선언,
// 세명의 정보를 프로그램 사용자로 부터 입력 받아 배열에 저장한다음,
// 배열에 저장된 데이터를 순서대로 출력

struct employee {
	char name[20];			// 종업원이름
	char cert_num[20];		// 주민등록번호
	int sal;				// 급여
};


void main(){
	int i;
	
	struct employee arr[3] = {
		{"타노스", "980207-18745254", 1500},
		{"마릴린먼로", "990207-18745254", 500},
		{"람보", "850207-18745254", 400}
	};

	for (i = 0; i < 3; i++) {
		printf("이름: %16s, 주민등록번호: %20s, 급여: %6d\n ", arr[i].name, arr[i].cert_num, arr[i].sal);
	}
	

	return 0;
}
