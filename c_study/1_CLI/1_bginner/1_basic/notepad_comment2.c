/* 설명1 <== old style(ANSI 99) comment */
// 설명2 <== new style(ANSI 89) comment


/*  블록으로 설명할 때 유용하다. 
설명 1
설명 2
설명 3
설명 4
설명 5
설명 6
설명 7
설명 8
설명 9
설명 10
*/

// 설명1  <= 라인단위로 설명할 때 유용하다.
// 설명2
// 설명3
// 설명 4
// 설명 5
// 설명 6
// 설명 7
// 설명 8
// 설명 9
// 설명 10


#include <stdio.h>

void main(){
	printf("나는 사과를 10개 먹었다.\n");
	// %d <== format string
	/* %d <== format string */
	printf("나는 딸기를 %d개 먹었다.\n",10);
	printf("나는 자두를 %d개 먹었고 체리 %d개를  먹었다.\n", 2,4);
	printf("잘 먹었다.");
}
