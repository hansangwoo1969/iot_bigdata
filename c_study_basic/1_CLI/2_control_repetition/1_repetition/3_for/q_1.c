#include <stdio.h>

// �� ���� ������ �Է� �޾�, �� ������ �����Ͽ� 
// �׻��̿� �����ϴ� �������� ���� ����ϴ� ���α׷� �ۼ�(ex_ 3�� 5�Է�, 3+4+5)
// ��, start_num <= end_num

void main(){
    int start_num; // ù��° ��
    int end_num;   // �ι�° ��
    int sum=0;     // ���� ��
    int i =0;      // ����

    printf("�� ���� ������ �Է��ϼ���: ");
    scanf("%d %d",&start_num, &end_num);

    for(i = start_num; i <= end_num; i++){
	sum += i;
    }
    printf("%d �� %d ��������: %d \n", start_num, end_num, sum);
}
