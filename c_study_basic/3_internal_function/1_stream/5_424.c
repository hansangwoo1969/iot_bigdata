#include <stdio.h>

void main(){
	char* str = "Simple String";
	
	printf("1. puts test --------\n");   // 함수실행시 자동 개행
	puts(str);
	puts("So Simple String");

	printf("2. fputs test --------\n");   
	//fputs(str, stdout); printf("\n");
	fputs(str, stdout); putchar('\n');
	//fputs("So Simple String", stdout); printf('\n');
	fputs("So Simple String", stdout); putchar('\n');


	printf("3. end of main -----\n");


}
