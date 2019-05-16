#include <stdio.h>

// C:\iot_bigdata\c_study\1_CLI\2_control_repetition\1_while
// 8_156_nested_while.c를 do ~ while문의 중첩기반으로 재 구현

void main(){
    int current_times = 2;
    int multiplier = 0;
    
    do {
	multiplier = 1; 
        while(multiplier<10){
            printf("%d x %d = %d \n", current_times, multiplier, current_times * multiplier);
	    multiplier++;  
	}
	printf("\n");
	current_times++; 
    }while(current_times<10);
}
