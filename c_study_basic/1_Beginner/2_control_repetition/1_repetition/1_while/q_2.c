#include <stdio.h>

// 1. ���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� �޾Ƽ� ,
// �� �� ��ŭ 3�� ��� ��� (ex, 5�Է½� 3 6 9 12 15)

void main(){
    int input_num=0;
    int i=1;
    const int TRIPLE = 3;
    

    printf("���� ������ �Է��ϼ���: ");
    scanf("%d", &input_num);

    while (i<=input_num){
	printf("  %d" , TRIPLE * i);
	i++;
    }
}
