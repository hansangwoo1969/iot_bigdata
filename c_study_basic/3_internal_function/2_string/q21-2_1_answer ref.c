#include <stdio.h>
#include <string.h>

// ������ ���� insight�� ���� ��,,
// ������ ������ ���ڿ� �Է¹޾� �� �ȿ� �����ϴ� ������ ������ ����ؼ� ����ϴ� ���α׷�
// ��) �Է¹��� ���ڿ� "A15#43", 1+5+4+3�� ������ ��� 

int CovToInt(char c) {
	static int diff = 1 - '1';    // ��� ���� n�� ���� 'n'�� ���� �����ϴ�.
	return c + diff;
}

int main() {
	char str[50];
	int i, len;
	int sum = 0;

	puts("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	//scanf("%s", str);
	len = strlen(str);

	// ���� ���ϱ�
	for (i = 0; i < len; i++) {
		if ('1' <= str[i] && str[i] <= '9') {
			sum += ConvToInt(str[i]);
		}
	}
	printf("������ �� ��: %d \n", sum);
	return 0;
}



