#include <stdio.h>

void main(){
    int multiplier=0;
    int times=2;

    printf("while���� ���\n");
    while(multiplier<10){
	printf("%d x %d = %d \n", times, multiplier, times * multiplier);
	multiplier++;
    }

    multiplier=0;
    times=2;
    printf("do while���� ��� \n");

    do{
	printf("%d x %d = %d \n", times, multiplier, times * multiplier);
	multiplier++;
    }while(multiplier<10);
}
