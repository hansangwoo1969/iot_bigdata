#include <stdio.h>
# include <string.h>
#pragma warning(disable:4996)

int main(){
	char str1[20];
	char str2[20];

	printf("���ڿ� �Է� 1: ");
	scanf("%s", str1);    // �迭��ü�� �ּҰ��� �����Ƿ� &������ ���ʿ�
	printf("���ڿ� �Է� 2: ");
	scanf("%s", str2);

	if (!strcmp(str1, str2)) {  // �ι��ڿ� ���Ͻ� 0�� ��ȯ, if���� ���� �Ƿ��� 0�̿��� ���ڰ� �ʿ�.     
		puts(" �� ���ڿ��� �Ϻ��� �����մϴ�.");
	}
	else {
		puts("�� ���ڿ��� �������� �ʽ��ϴ�.");

		if (!strncmp(str1, str2, 3))
			puts("�׷��� ���� �� ���ڴ� �����մϴ�.");
	}
	return 0;


}
