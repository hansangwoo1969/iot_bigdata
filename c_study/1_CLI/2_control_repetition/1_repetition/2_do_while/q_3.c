#include <stdio.h>

// 0�̻� 100������ �����߿��� ¦���� ���� ���, 
// do while������,, ����� 2550

void main(){
    int num = 1;  // 100������ ���� ����
    int sum = 0;  // ������
    int even = 0; // ¦��
    
    do{
	even = num * 2;
	sum += even;
	num++;
        //printf("100������ ������: %d \n", sum); 
    }while(0<= num && num <=50);
    
  printf("100������ ������: %d \n", sum); 
     
}
