#include <stdio.h>
#pragma warning (disable:4996)

// ȸ�� �Ǵ�(�Լ�)
// ���ڿ� ����, 


//void is_palindrome(char *arr, int size)


int main(void) {
	char str[50];
	int i, len;

	printf("���ڿ� �Է�: ");
	scanf("%s", &str);

	for (i = 0; str[i] != 0; i++) {
		len = i;
	}
//	len = sizeof(str) / sizeof(char);

	for (i = 0; i < len - i; i++) {
		if (str[i] != str[len - i])
			break;
	}
	if (i > len / 2){
		printf("ȸ���Դϴ�\n");
    }else {
		printf("ȸ���� �ƴմϴ�\n");
	}
	return 0;
}