#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)

typedef struct person{
	char name[20];
	char phoneNum[20];
	int age;
} Person;

void ShowPersonInfo(Person man) {

	printf("name: %s \n", man.name);
	printf("phone: %s \n", man.phoneNum);
	printf("age: %d \n", man.age);
}

// �Լ��� �⺻������ �Ѱ��� ���� ���� �� �� �ִ�
// ������ �Ʒ��� ���� ����ü�� ����Ѵٸ� ����ü�� ����� Ȱ���Ͽ� 
// �������� 2�� �̻��� ���� ���Ͽ� ������ �����ϴ�
Person ReadPersonInfo(void){

	Person man;
	printf("name? "); scanf("%s", man.name);
	printf("phoneNum? "); scanf("%s", man.phoneNum);
	printf("age? "); scanf("%d", &man.age);

	return man;
}
int main(void){
	// ����ü�� ���ؼ��� ���� struct���� ���Ͽ� C���� �����ϴ� ���
	// �⺻���� ���� ���� ������ �����ϰ� �ִ�.
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);

	return 0;
}
