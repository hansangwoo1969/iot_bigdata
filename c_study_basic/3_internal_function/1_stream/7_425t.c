#include <stdio.h>
#pragma warning(disable:4996)

void main(){
	char str[7];
	int i;


	// gets�� ��ȯ������ �о���� ���ڿ��� ��ȯ�Ѵ�.
	// str�� call by reference�� ���� ��ȯ�ǹǷ� ���� ����̴�.
	// printf("%s", gets(str));
	gets(str);
	puts(str);
	// ���� ���1
	// AA BB  <= �Է� : ���� ���ڸ� �����Ͽ� �Է��� �޴´�.
	// AA BB  <= ��� 

	// ���� ���2
	// Hello World! <= �Է�
	// ��Ÿ�� ���� �߻� (str�� ������� ū ���ڿ��� �Է� �޴� ���� �õ��Ͽ��� ������)


	/*for (i = 0; i < 3; i++) {
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s \n", i + 1, str);
	}
	*/
}
