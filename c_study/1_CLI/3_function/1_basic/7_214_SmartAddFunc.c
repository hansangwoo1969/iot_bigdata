#include <stdio.h>

// �ؼ�: �� ���α׷��� �Լ��� 4���� ������ �����Ͽ� ���α׷��� �ϼ��ϴµ� ������ �ξ���.
// �ǹ������� �Լ��� ũ��� �Ϲ������� 50~100���� ������ �Ը� Ŀ���� ��쿡 �̸� �Լ�ȭ �Ѵ�.
// �ƴϸ� Ư������� �����ϴ� ���� ��Ȯ�ϴٸ� ���� ���� ������ �Լ��� ���� �� �ִ�.

int Add(int num1, int num2){        // ����: ��, ��ȯ��: ��
	return num1 + num2;
}

void ShowAddResult(int num){        // ����: ��, ��ȯ��: ��
	printf("������� ���: %d \n", num);
}

int ReadNum(void){                  // ����: ��, ��ȯ��: ��
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void){        // ����: ��, ��ȯ��: ��
	printf("==�Լ��� 4���� ������ ����� ���� ver1 == \n");
	printf("�� ���� ������ �Է� �Ͻø� ��������� ��� �˴ϴ�. \n\n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���: ");
}

void main(void){
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	return 0;

}
