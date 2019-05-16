#include <stdio.h>

// shif left: 비트를 오른쪽으로 n번 만큼 이동

void main(){
    int num = 15;           // 00000000 00000000 00001111
    int result1 = num >> 1; // 00000000 00000000 00000111 => 7
    int result2 = num >> 2; // 00000000 00000000 00000011 => 3
    int result3 = num >> 3; // 00000000 00000000 00000001 => 1
    // Intel CPU에서 Visual Studio 컴파일러로 Bit shift Right연산을 한 결과
    // 최하위 비트가 최상위 비트로 Right Robin되지는 않았다.
    // Bit shift Right연산을 하면서 최하위 비트는 사라진다.
    // 상황에 따라 >>11의 결과가 아래와 같이 나올 수도 있다.
    // 1000000 00000000 00000111
    // 0100000 00000000 00000111


    printf("1칸 이동 결과: %d\n", result1);
    printf("2칸 이동 결과: %d\n", result2);
    printf("3칸 이동 결과: %d\n", result3);



}
