#include <stdio.h>

void my_login(){
	const int my_password = 1234567;
	const unsigned char max_count=3;
	const unsigned char iot_true=1;
	const unsigned char iot_false=0;
	int input_count=0;
	int input_password=0;

	for(;input_count<max_count; input_count++){
		printf("�н����带 �Է��ϼ���: ");
		scanf("%d", &input_password);

		if (my_password == input_password){
			printf("IoT �����͹� ���� �����մϴ�.\n");
			return; // return�� ������ �Ǹ� �Լ� ��ü�� ������ ���� ���´�.
				// �ݺ������� break�� �����ϴ�.
		}
	}
}

void main(){
	my_login();
}
