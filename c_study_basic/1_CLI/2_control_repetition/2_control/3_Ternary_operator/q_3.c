#include <stdio.h>
/*
 *  학생의 전체 평균점수에 대한 학점 출력,
 *  학점: 90점 이상_A, 80점 이상_B, 70점 이상_C, 50점 이상_D, 50점 미만_F
 *  1. 국어, 영어, 수학의 점수를 입력받아 평균을 구한고,
 *  2. 적절한 학점을 출력
 
 */

 void main(){
	int kor, eng, math;  // 과목
	const int ITEM =3;   // 과목 수
	int sum=0;
	double avg=0;

	printf("세 개의 정수를 입력하세요 ");
	scanf("%d %d %d", &kor, &eng, &math);
	
	sum = kor + eng + math;
	avg = sum / ITEM;
	
	if (avg >= 90){
		printf(" 평균 %.2f는  A 학점 입니다.\n", avg);
	} else if (avg >= 80) {
		printf(" 평균 %.2f는  B 학점 입니다.\n", avg);
	} else if (avg >= 70) {
		printf(" 평균 %.2f는  C 학점 입니다.\n", avg);
	} else if (avg >= 50) {
		printf(" 평균 %.2f는  D 학점 입니다.\n", avg);
	} else {
		printf(" 평균 %.2f는  F 학점 입니다.\n", avg);
	}
	

 }
