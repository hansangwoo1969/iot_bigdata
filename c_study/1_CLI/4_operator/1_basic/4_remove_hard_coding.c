#include <stdio.h>

void main(){
	int accumulated_total=0;
	int daily_income=0;
	int daily_expense=0;

	printf("�������� 5�� �� ����: %d\n", accumulated_total);

	daily_income=10000;
	accumulated_total += daily_income;
	printf("CU���������� %d�� ����\n", daily_income);
	printf("�������� 5�� 1�� �� ����: %d\n", accumulated_total);

        
	daily_income=30000;
	accumulated_total += daily_income;
	printf("CU���������� %d�� ����\n", daily_income);
	printf("�������� 5�� 3�� �� ����: %d\n", accumulated_total);

	daily_expense=5000;
	accumulated_total -= daily_expense;
	printf("ū�� �Ĵ翡�� %d�� ���ɰ� ����\n", daily_expense);
	printf("�������� 5�� 3�� �� ����: %d\n", accumulated_total);
	
	
	daily_expense=20000;
	accumulated_total -= daily_expense;
	printf("vip���� %d�� ���ɰ� ����\n", daily_expense);
	printf("�������� 5�� 3�� �� ����: %d\n", accumulated_total);
	
	daily_income=40000;
	accumulated_total += daily_income;
	printf("CU���������� %d�� ����\n", daily_income);
	printf("�������� 5�� 3�� �� ����: %d\n", accumulated_total);
}
