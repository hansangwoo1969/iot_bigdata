#include <stdio.h>

// 1. ���� ����������Է� �޾�,��� ���� ����,,
// 0�Է½� ��������� ���� ����ϰ� ���α׷� ����,,,  ���

void main(){
    int input_num;
    int sum=0;
    
   
    printf("������ �Է��ϼ���: ");
    scanf("%d", &input_num);

    while (input_num !=0){
	sum += input_num;
        scanf("%d", &input_num);
    }
    
    printf("�����Է°�: %d", sum);
}
