#include <stdio.h>
// #pragma warning (disable:4996)

void main(){
	int arr[3] = {0,1,2};
	
	// �迭�� �̸��� ù��° ��Ҹ� ��Ÿ���� �ּҴ� ����.
	printf("�迭�� �̸�: %p \n", arr);
	printf("ù ��° ���: %p \n", arr[0]);
	printf("�� ��° ���: %p \n", arr[1]);
	printf("�� ��° ���: %p \n", arr[2]);

/*
�迭�� �̸�: 0015FAE4
ù ��° ���: 00000000
�� ��° ���: 00000001 <=  int�� 4byte�̹Ƿ� ���� �ּҰ����� 4byte������ ��
�� ��° ���: 00000002
 */
	
}
