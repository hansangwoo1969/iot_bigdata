#include <stdio.h>
// �� �ܾ� �Է�, (���ڿ����� Ȯ��, �ݺ������� ���ں� ��)
// �ƽ�Ű �ڵ� ���� ���� ū ���ڸ� ã�� ����ϴ� ���α׷��ۼ�

void main(void){
	char str[100];
	int len=0, i, max=str[0];

	printf("�� �ܾ� �Է�: ");
	scanf("%s", str);

	while (str[len] !=0 )    // ���ڿ� ��Ұ� ���� �� ����   while (str(len) != '\n'�� ����
		len++;

	for (i=0;i<len;i++){
		if (max < str[i])
			max = str[i];
	}
	printf("�ƽ�Ű�ڵ尪�� ���� ū ����: %c \n", max);

}
