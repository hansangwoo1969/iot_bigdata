#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

// ���ڿ������� �������̸�, �ֹε�Ϲ�ȣ, ���������� �޿������� ������ �� �ִ� ����ü ����
// ����ü ������ �ϳ� ������ ���� ���α׷� ����ڰ� �Է��ϴ� ������ ������ ä���,
// ������ ä���� �����͸� ���


struct employee {
	char name[20];			// �������̸�
	char cert_num[20];		// �ֹε�Ϲ�ȣ
	int sal;				// �޿�
};


void main(){
	
	struct employee man = {"����Ŭ", "990207-18745254", 500};

	printf("�̸�: %s, �ֹε�Ϲ�ȣ: %s, �޿�: %d\n ", man.name, man.cert_num, man.sal);

	return 0;
}
