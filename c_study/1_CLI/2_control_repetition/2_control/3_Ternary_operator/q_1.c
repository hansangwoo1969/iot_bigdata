#include <stdio.h>
/*
 *  1�̻� 100�̸��� ���� �߿��� 7�ǹ���� 9�� ����� ����ϴ� ���α׷� �ۼ�
 *  ��, 7�� 9�� ������� �ѹ��� ���
 
 */

 void main(){
	int num;

	for ( num=1 ; num<100; num++){
		if ( num % 7 == 0  || num % 9 ==0){
		printf("%d ", num);
	        }
         }
 }
