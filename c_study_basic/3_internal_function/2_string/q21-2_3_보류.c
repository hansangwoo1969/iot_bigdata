#include <stdio.h>
# pragma warning(disable:4996)
//
// ���� ����,, ������ ���� ������ ��, �����ľ�
// �̸��� ���� ����446p��Ŀ� �°� ���ڿ��� �Է� "������ 29"
// �̸��� �����ڰ� �ƴҼ���, �����ϼ��� ����.�������� �̸��� ���� ����
// �� ����� ������ �Է¹޾� �̸��� ���̰� ������ �ٸ���,,,

int GetSpaceIndex(char str[]) {
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++) {
		if (str[i] == '')
			return i;
	}
	return -1; // ���鹮�ڰ� �������� �ʴ� ����� ��ȯ
}

int CompName(char str1[], char str2[]) {
	int idx1 = GetSpaceIndex(str1);
	int idx2 = GetSpaceIndex(str2);

	if (idx1 != idx2)  // �̸��� ���̰� �ٸ��� ���� �ٸ� �̸�
		return 0;
	else
		return !stncmp(str1, str2, idx1);
}

int ComAge(char str1[], char str2[]) {
	int idx1 = GetSpaceIndex(str1);
	int idx2 = GetSpaceIndex(str2);
	int age1, age2;

	age1 = atoi(&str1[idx1 + 1]);  // str1[idx1]�� ���̰� ����� ��ġ
	age2 = atoi(&str2[idx2 + 1]);  // str2[idx2]�� ���̰� ����� ��ġ

	if (age1 == age2)
		return 1;
	else
		return 0;
}


int main (){
	char str1[20];
	char str2[20];
	
	printf("ù ��° ��� ���� �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;
	

	printf("�� ��° ��� ���� �Է�: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;
		
	if (CompName(str1, str2))
		puts("�̸��� ���� �մϴ�.");
	else
		puts("�̸��� �������� �ʽ��ϴ�.");

	if (ComAge(str1, str2))
		puts("���̰� �����ϴ�!");
	else
		puts("���̰� ���� �ʽ��ϴ�.");

	return 0;



}



