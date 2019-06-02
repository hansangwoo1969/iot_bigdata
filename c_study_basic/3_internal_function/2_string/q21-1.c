#include <stdio.h>
// getchar함수와 putchar함수의 활용

int CharConv(int ch){
	int diff;

	diff = 'a'-'A';
	if (ch >='a' && ch <='z'){
		//return ch-diff;
		putchar(ch-diff);
		//printf("%c", ch-diff);
	}
	else if (ch >='A' && ch <='Z'){
		//return ch + diff;
		putchar(ch+diff);
		//printf("%c", ch+diff);
	}
	else {
		//putchar("-1"); // 홑따옴표와 겹따옴표의 값이 다르게 출력됨
		return -1;
		printf("-1");
	}	
}

int main (){
	int i;
	char ch;
	int diff;

	printf("문자입력: ");
	
	ch = getchar();    
	//scanf("%c", &ch);


	CharConv(ch);

/*	diff = 'a'-'A';
	if (ch >='a' && ch <='z')
		return ch-diff;
		putchar(ch-diff);
		//printf("%c", ch-diff);
	else if (ch >='A' && ch <='Z')
		putchar(ch+diff);
		//printf("%c", ch+diff);
	else
		putchar("-1");
		//return -1;
		//printf("-1");
*/

	return 0;

}



