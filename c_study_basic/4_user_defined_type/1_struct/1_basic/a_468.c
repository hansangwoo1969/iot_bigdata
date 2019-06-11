#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

// 구조체 변수의 주소값은 구조체 변수의 첫 번째 멤버의 주소값과 동일.

struct point{
	int xpos;
	int ypos;
};

struct person {
	char name[20];
	char phoneNum[20];
	int age;
};


void main(){
	
	struct point pos = { 10, 20 };
	struct person man = {"이승기", "010-1212-0001", 21};

	printf("%p %p \n ", &pos, &pos.xpos);
	printf("%p %p \n ", &man, man.name);

	return 0;
}
