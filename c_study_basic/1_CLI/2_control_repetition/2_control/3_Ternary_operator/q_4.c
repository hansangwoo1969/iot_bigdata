#include <stdio.h>
/*  �Ʒ��� ������ ���ǿ����ڷ� ���,,,
 *  �л��� ��ü ��������� ���� ���� ���,
 *  ����: 90�� �̻�_A, 80�� �̻�_B, 70�� �̻�_C, 50�� �̻�_D, 50�� �̸�_F
 *  1. ����, ����, ������ ������ �Է¹޾� ����� ���Ѱ�,
 *  2. ������ ������ ���
 
 */

 void main(){
	int kor, eng, math;  // ����
	const int ITEM =3;   // ���� ��
	int sum=0;
	double avg=0;
	char grade;

	printf("�� ���� ������ �Է��ϼ��� ");
	scanf("%d %d %d", &kor, &eng, &math);
	
	sum = kor + eng + math;
	avg = sum / ITEM;
        
	grade = avg>=90 ? 'A' : (avg >= 80 ? 'B' : (avg >= 70 ? 'C': (avg >= 50 ? 'D':'F')));

	printf(" ��� %.2f��  %c ���� �Դϴ�.\n", avg, grade);

/*	
	if (avg >= 90){
		printf(" ��� %.2f��  A ���� �Դϴ�.\n", avg);
	} else if (avg >= 80) {
		printf(" ��� %.2f��  B ���� �Դϴ�.\n", avg);
	} else if (avg >= 70) {
		printf(" ��� %.2f��  C ���� �Դϴ�.\n", avg);
	} else if (avg >= 50) {
		printf(" ��� %.2f��  D ���� �Դϴ�.\n", avg);
	} else {
		printf(" ��� %.2f��  F ���� �Դϴ�.\n", avg);
	}
*/	

 }
