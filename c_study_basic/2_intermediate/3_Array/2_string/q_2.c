#include <stdio.h>
#pragma warning (disable:4996)
/*
void main() {
// char�� 1���� �迭�� ����� ���ÿ� ������������ �ʱ�ȭ �ϰ�,
// �ʱ�ȭ ���Ŀ��� ����� ������ ���,
// "Good time"

	char str[] = "Good time";
	int idx = 0;

	//printf("���ڿ� �Է�: ");

	scanf("%s", str);
	printf("�Է� ���� ���ڿ�: %s \n", str);

	printf("���� ���� ���: ");
	while (str[idx] != '\0') {
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
}
*/

int main(void){
	char str[]={'G', 'o' ,'o' , 'd' ,' ' , 't', 'i', 'm', 'e'};
	int arrLen = sizeof(str) / sizeof(char);
	int i;

	for (i=0; i<arrLen; i++)
	{
		printf("%c", str[i]);
	        printf("\n");
	}
	return 0;
}


