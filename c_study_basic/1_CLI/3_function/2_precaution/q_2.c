#include <stdio.h>
/* 섭씨(Celsius)온도를 입력하면 화씨(Fahrenheit)온도로 반환하는 CelToFah라는 이름의함수,
 * 화씨온도를 입력하면 섭씨 온도를 반환하는 FahToCel이라는 이름의 함수 정의하고
 * 이 두함수를 호출하는 예제를 완성해 보자
 * 변환공식 Fah = 1.8 * Cel + 32 , Cel = (Fah - 32)/1.8
 */

void CelToFah(void);
void FahToCel(void);

void main(void){
	int opt;

	printf(" 온도 바꾸기  1. 섭씨에서 화씨로,  2. 화씨에서 섭씨로 ");
	printf(" 선택:  \n");
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
	printf("섭씨 온도를 입력하세요 ");
	scanf("%lf", &Cel);
	ctf = 1.8 * Cel + 32;
	printf( "섭씨 %.2f도는 화씨로 %.2f도", Cel, ctf);
}

void FahToCel(void){
	double Fah;
	double ftc;
	printf("화씨 온도를 입력하세요 ");
	scanf("%lf", &Fah);
	ftc = (Fah - 32)/1.8;
	printf( "화씨 %.2f도는 섭씨로 %.2f도", Fah, ftc);
}

