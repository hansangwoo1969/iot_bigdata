/* �޸𸮰����� �����Ҵ�
1. ���ڿ��� �Է¹޾� �ܾ ������ ���, "I am a boy" -> "boy a am I"
2. ���ڿ��� �ִ���� ���� ���� �Է¹ޱ�� �ϰ�,
3. �׸��� �� ���̸�ŭ �޸� ������ �������� �Ҵ��ؼ� ���ڿ��� �Է¹ޱ��,,
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
#pragma warning (disable:4996)

int main(void) {
	int maxlen, len, i;
	char* str;
	printf("���ڿ��� �ִ� ���� �Է�: ");
	scanf("%d", &maxlen);
	getchar();   // \n������ ����
	str = (char*)malloc(sizeof(char) * (maxlen + 1));

	printf("���ڿ� �Է�: ");
	fgets(str, maxlen + 1, stdin);
	str[strlen(str) - 1] = 0;  // \n������ ����
	len = strlen(str);

	for (i = len; i > 0; i--) {
		if (str[i] == ' ') {
			printf("%s", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
	free(str);
	return 0;
}
