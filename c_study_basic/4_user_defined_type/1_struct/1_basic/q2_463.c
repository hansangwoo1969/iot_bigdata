#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

// ����1�� employee����ü�� ������� ���̰� 3�� �迭 ����,
// ������ ������ ���α׷� ����ڷ� ���� �Է� �޾� �迭�� �����Ѵ���,
// �迭�� ����� �����͸� ������� ���

struct employee {
	char name[20];			// �������̸�
	char cert_num[20];		// �ֹε�Ϲ�ȣ
	int sal;				// �޿�
};


void main(){
	int i;
	
	struct employee arr[3] = {
		{"Ÿ�뽺", "980207-18745254", 1500},
		{"�������շ�", "990207-18745254", 500},
		{"����", "850207-18745254", 400}
	};

	for (i = 0; i < 3; i++) {
		printf("�̸�: %16s, �ֹε�Ϲ�ȣ: %20s, �޿�: %6d\n ", arr[i].name, arr[i].cert_num, arr[i].sal);
	}
	

	return 0;
}
