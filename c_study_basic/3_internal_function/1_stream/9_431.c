#include <stdio.h>

void main(){
	char perID[7];
	char name[10];

	fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ", stdout);
	fgets(perID, sizeof(perID), stdin);

	printf("�̸��Է�: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�ֹι�ȣ: %s \n", perID);
	printf("�̸�: %s \n", name);

}

