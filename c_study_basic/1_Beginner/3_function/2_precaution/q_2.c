#include <stdio.h>
/* ����(Celsius)�µ��� �Է��ϸ� ȭ��(Fahrenheit)�µ��� ��ȯ�ϴ� CelToFah��� �̸����Լ�,
 * ȭ���µ��� �Է��ϸ� ���� �µ��� ��ȯ�ϴ� FahToCel�̶�� �̸��� �Լ� �����ϰ�
 * �� ���Լ��� ȣ���ϴ� ������ �ϼ��� ����
 * ��ȯ���� Fah = 1.8 * Cel + 32 , Cel = (Fah - 32)/1.8
 */

void CelToFah(void);
void FahToCel(void);

void main(void){
	int opt;

	printf(" �µ� �ٲٱ�  1. �������� ȭ����,  2. ȭ������ ������ ");
	printf(" ����:  \n");
	scanf("%d", &opt);

	if (opt == 1){
		CelToFah();
	} else if (opt == 2){
		FahToCel();
	}
}


void CelToFah(void){
	double Cel;
	double ctf;
	printf("���� �µ��� �Է��ϼ��� ");
	scanf("%lf", &Cel);
	ctf = 1.8 * Cel + 32;
	printf( "���� %.2f���� ȭ���� %.2f��", Cel, ctf);
}

void FahToCel(void){
	double Fah;
	double ftc;
	printf("ȭ�� �µ��� �Է��ϼ��� ");
	scanf("%lf", &Fah);
	ftc = (Fah - 32)/1.8;
	printf( "ȭ�� %.2f���� ������ %.2f��", Fah, ftc);
}

