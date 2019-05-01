/* 
설명 1
설명 2
설명 3
*/

// 
설명1  <= ANSI 89 스타일 주석은 해당라인에만 적용되기 때문에 에러발생
설명2
설명3
//

#include <stdio.h>

void main(){
	printf("나는 사과를 10개 먹었다.\n");
	// %d <== format string
	/* %d <== format string */
	printf("나는 딸기를 %d개 먹었다.\n",10);
	printf("나는 자두를 %d개 먹었고 체리 %d개를  먹었다.\n", 2,4);
	printf("잘 먹었다.");
}
