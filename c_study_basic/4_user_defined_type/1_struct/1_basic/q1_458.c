#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

// 문자열형태의 종업원이름, 주민등록번호, 정수형태의 급여정보를 저장할 수 있는 구조체 정의
// 구조체 변수를 하나 선언한 다음 프로그램 사용자가 입력하는 정보로 변수를 채우고,
// 변수에 채워진 데이터를 출력


struct employee {
	char name[20];			// 종업원이름
	char cert_num[20];		// 주민등록번호
	int sal;				// 급여
};


void main(){
	
	struct employee man = {"마이클", "990207-18745254", 500};

	printf("이름: %s, 주민등록번호: %s, 급여: %d\n ", man.name, man.cert_num, man.sal);

	return 0;
}
