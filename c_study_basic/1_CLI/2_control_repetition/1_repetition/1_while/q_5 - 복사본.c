#include <stdio.h>

// �Է¹��� �������� ����� ����ϴ� �����׷� �ۼ�
// 1. �Է¹��� ������ ����
// 2. ��հ��� �Ҽ��� ���ϱ��� ��� 

void main(){
    int input_cnt=0; // �ϳ��� �Է� 
    int i=0;       // �Է¹��� ���� ����
    int sum=0;     // �հ�
    int j=0;       // �����ϴ� ��������
   
    printf("�Է� ���� �����ǰ����� �Է��ϼ���: ");
    scanf("%d \n ", &i);

   // printf("������ �Է��ϼ���: ");
   // scanf("%d\n", &input_cnt);

    while (j<i){
	scanf("%d", &input_cnt);
//	printf("%d��° ���� �Է�",(j+1));
	sum += input_cnt;
	j++;
    }
    
    printf("������ ��: %d, ���� ���� ����: %d, ���: %lf \n", sum, j, (double)sum/i);
}
