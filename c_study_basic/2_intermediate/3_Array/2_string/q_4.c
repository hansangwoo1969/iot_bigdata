#include <stdio.h>
// ���α׷� ����� ���ܾ� �Է�, char�� �迭�� ����, 
// �ܾ� ��������,, null������ ��ġ���� �ȵ�,,
// ������ �� �� ���

int main(void){
	char str[100];
	int len=0, i, temp;

	printf("�ܾ� �Է�: ");
	scanf("%s", str);

	while (str[len] != 0)
		len++;

	for (i=0; i<len/2; i++){
		temp = str[i] ;
		str[i] = str[(len-i)-1];
		str[(len-i)-1] = temp;
	}
	printf("%s", str);



}

