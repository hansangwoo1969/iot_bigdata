#include <stdio.h>
/*
   �Լ����� 3
   ��ȯŸ�� ��, ���� �� (��ȯŸ���� �ְ� ���ڴ�  ���� ���̽�)
   ����: ȣ���ϴ� �ʿ����� �Է¿� ���Ͽ� �Ű澲�� �ʾƵ� �ǰ�
   	������ ������� �޾Ƽ� ó�� �� �� �ִ�.
   ����: �Լ����� �Է��� ó���ؾ� �ϴ� �δ��� �����.
*/

int my_add(void){ // �Լ� ���� (Function Definition)
	int operation_result;
	int number1;
	int number2;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d", &number1, &number2 );

	printf("\n ==������ ���� ���� ver.1 == \n"); 
	printf("ù��° �Է�: %d \n", number1);
	printf("�� ��° �Է�: %d \n", number2);

	operation_result = number1 + number2;
	printf("%d + %d = ", number1, number2);

	// return number1 + number2; <= ǥ����(expressio)�� �ְ� ���� ���� �����ϴ� ���
	return operation_result; //������ �����ϴ� ���
}

void main(){
	/*
	int result;
	result = my_add();
        // my_add() = result; �������� �������� �ʴ� �߸��� ��뿹
	// printf("%d \n", result);
	*/

	printf("%d \n", my_add());
	//printf("%d %d %d %d \n", my_add(), my_substraction(),my_multiplication(),my_division());

}
