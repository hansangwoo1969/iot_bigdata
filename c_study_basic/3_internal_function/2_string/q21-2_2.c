#include <stdio.h>
# pragma warning(disable:4996)

// str1�� str2�� ���ؼ� ���α׷� ����ڷκ��� ���ڿ� �Է¹޾�(fgets�Լ�),
// str1�� str3�� ����, str2�� str3�� �߰�
// str3 ���

int main (){
	char str1[20];
	char str2[20];
	char str3[40];
	
	printf("���ڿ� �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;
	printf("����: %d, ����: %s \n", strlen(str1), str1);

	printf("���ڿ� �Է�: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;
	printf("����: %d, ����: %s \n", strlen(str2), str2);	
	
	strcpy(str3, str1);
	//str3[sizeof(str3) - 1] = 0;
	puts(str3);
	
	strcat(str3, str2);
	puts(str3);


}



