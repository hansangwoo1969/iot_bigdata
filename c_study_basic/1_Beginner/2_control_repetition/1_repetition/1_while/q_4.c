#include <stdio.h>

// 1. ���� ����������Է� �޾� ������ �������� ���

void main(){
    int dan;
    int i=9;
   
    
    printf("������ �Է��ϼ���: ");
    scanf("%d", &dan);

    while (i > 0){
	printf("%d x %d = %d \n", dan, i, dan * i);
        i--;
	}
}
