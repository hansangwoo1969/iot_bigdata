#include <stdio.h>
/* 
   �Լ����� (Function Definition)
   [��ȯ (return)Ÿ��][�Լ���]([����Ÿ��][���ڸ�1],[���ڸ�2],,,){
                                        parameter / argument
  	Statement1;
  	Statement2;
  	    '
           '
           [return][��ȯ��];
   }          
*/

void main(){
	int result;
	int number1;
	int number2;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d", &number1, &number2 );

	printf("\n ==������ ���� ���� ver.1 == \n"); 
	printf("ù��° �Է�: %d \n", number1);
	printf("�� ��° �Է�: %d \n", number2);

	result = number1 + number2;
	printf("%d + %d = %d\n", number1, number2, number1+number2);
	printf("������ ���� �Ǿ����ϴ�. �����մϴ�.\n");

}
