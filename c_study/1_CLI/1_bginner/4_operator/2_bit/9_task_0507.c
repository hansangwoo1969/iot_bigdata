#include <stdio.h>

// 4 * 16 / 8

void main(){
    int num = 4;              // 00000000 00000000 00000100
    int sixteen = num << 2;   // 00000000 00000000 00010000 => 16
    int eight = sixteen >> 1; // 00000000 00000000 00001000 => 8
    int result;

    result = (num * sixteen) / eight; 
    printf("4 x 16 / 8 °á°ú: %d\n", result);
    
}


