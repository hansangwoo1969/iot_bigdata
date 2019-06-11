/* 문자열 방식의 데이터 입출력 
1. mystory.txt파일 생성해서 이름, 주민번호, 전화번호를 저장하는 프로그램 작성
2. 문자앞에 #붙이고, 저장완료후 메모장으로 확인
*/

#include <stdio.h>
#pragma warning (disable:4996)

int main(void) {

	FILE* fp = fopen("mystory.txt", "wt");
	fputs("#이름: 윤성우 \n", fp);
	fputs("#주민번호: 900208-1012589 \n", fp);
	fputs("#전화번호: 010-1111-1112 \n", fp);
	fclose(fp);

	return 0;

}
