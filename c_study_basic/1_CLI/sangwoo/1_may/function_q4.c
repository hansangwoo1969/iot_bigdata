#include <stdio.h>

double CelToFah(double Cel);
double FahToCel(double Fah);

void main(){

	int question;
	double input_Cel;
	double input_Fah;

	printf("� ���� ���� �Ͻðڽ��ϱ�\n\t1.������ ȭ����\n\t2.ȭ���� ������\n");
	scanf("%d",&question);

	switch(question){
		case 1:
			printf("\n������ �Է��ϼ���: ");
			scanf("%lf",&input_Cel);
			printf("�����Ǵ� ȭ�� �µ��� %.2f �Դϴ�.",CelToFah(input_Cel));
			break;
		case 2:
			printf("\nȭ���� �Է��ϼ���: ");
			scanf("%lf",&input_Cel);
			printf("�����Ǵ� ���� �µ��� %.2f �Դϴ�.",FahToCel(input_Cel));
			break;
		default:
			printf("������ �� ���� ����Դϴ�.");
	}
}

double CelToFah(double Cel){
	return (1.8*Cel +32); 
}
double FahToCel(double Fah){
	return ((Fah-32)/1.8);
}
