#include <stdio.h>

void main(){
	char str[7];
	int i;

	for (i = 0; i < 3; i++) {
		fgets(str, sizeof(str), stdin);         // ������ �ʰ��� �Էº��� ���������� ���,,
		printf("Read %d: %s \n", i + 1, str);
	}
	
/*	for (i = 0; i < 3; i++) {
		gets(str, sizeof(str), stdin);       // ������ �ʰ��� �ڷᵵ ���,,,���� ����,,
		printf("Read %d: %s \n", i + 1, str);
	}*/
	/* ���� ���
	We
	Read 1: We
	like
	Read 2: lik
	you
	Read 3: you	
	*/





}
