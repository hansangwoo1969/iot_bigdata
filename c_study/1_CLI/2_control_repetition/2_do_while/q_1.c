#include <stdio.h>
// 5���� ���� �Է� �޾�, �� ���� ���� ���� ��, 
// ����: ������ �ݵ�� 1�̻�, 1�̸��� ��� ���Է� �䱸

void main(){
    int input_num;    // �Է¹��� ����
    int i=0;
    int total=0;      // ���� �� 
    const int NUM=5;  // 1���� ū ���� �Է����� 5ȸ

    while (i < NUM){
        
	printf("�����Է�: ");
        scanf("%d", &input_num);
       // total += input_num;
	
	while(input_num < 1){
   	    printf("1���� ū �����Է�: ");
            scanf("%d", &input_num);
        } 
        total += input_num;
	i++;
//	print("������: %d", total);
    }

	printf("������: %d", total);
}
