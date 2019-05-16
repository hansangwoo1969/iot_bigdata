#include <stdio.h>

// 1. 프로그램 사용자로부터 양의 정수를 하나 입력 받아서 ,
// 그 수 만큼 "Hello world!"를 출력하는 프로그램을 작성

void main(){
    int num=0;

    printf("양의 정수를 입력하세요: ");
    scanf("%d", &num);

    while (num){
	printf("Hello world!\n" , num);
	num--;
    }
}
