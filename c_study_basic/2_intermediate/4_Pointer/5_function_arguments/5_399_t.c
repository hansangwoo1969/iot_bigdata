#include <stdio.h>

int main(int argc, char * argv[]){
	int i=0;
	
	
	printf("���񽺷���: %s \n",argv[1]);
	printf("���񽺷���: %c \n",argv[1][0]);

	switch (argv[1][0]){
	case '5':
		printf("�ȳ��ϼ���");
		break;
	case '4':
		printf("�����澾 �ȳ��ϼ���.\n");
		break;
	case '3':
		printf("������� �ȳ��ϼ���.\n");
		break;
	case '2':
		printf("vip���̽� ������� �ȳ��ϼ���.\n");
		break;
	case '1':
		printf("�������! ã���ּż� ������ �����Ͽɴϴ�.\n");
		break;



	
	}

	return 0;
}
