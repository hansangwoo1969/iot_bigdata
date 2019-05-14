#include <stdio.h>

void main(){
	const unsigned char iot_true=1;
	const unsigned char iot_false=0;
	char condition_A == iot_true
	char condition_A == iot_true
	char condition_A == iot_true
	char condition_A == iot_true
	char condition_A == iot_true
	
	if (condition_A == iot_true){
		if (condition_B == iot_true) {
			if (condition_C == iot_false){
				if (condition_D == iot_false){
					printf("아주 실행하기 어려운 조건하에 수행되는 코드!\n");
				}
			}
		}
	}
}

// 중첩된 if의 조건은 아래와 같이 &&관계연산자로 단순화 할 수 있다.
// 여러분이 프로그래밍에 자신이 붙으면 마틴파울러 리팩도토링 공부 요망!
if (condition_A == iot_true &&  condition_B == iot_true && condition_C == iot_false && condition_D == iot_false){
	printf("아주 실행하기 어려운 조건하에 수행되는 코드!\n");
}


	if (condition_A == iot_true){	
		printf("condition A: %d \n", condition_A);
		if (condition_B == iot_true) {
			if (condition_C == iot_false){
				if (condition_D == iot_false){
					printf("아주 실행하기 어려운 조건하에 수행되는 코드!\n");

