#include <stdio.h>
// getchar�Լ��� putchar�Լ��� Ȱ��

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
		//putchar("-1"); // Ȭ����ǥ�� �����ǥ�� ���� �ٸ��� ��µ�
		return -1;
		printf("-1");
	}	
}

int main (){
	int i;
	char ch;
	int diff;

	printf("�����Է�: ");
	
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



