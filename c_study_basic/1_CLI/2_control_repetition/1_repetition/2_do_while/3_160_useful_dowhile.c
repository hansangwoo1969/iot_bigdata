#include <stdio.h>

// while���� do while�� ���ϴ� �ڵ�

void main(){
    int total=0, input_num=0;

/*  // do while �� =====
    do{
	printf("���� �Է�(0 to quit): ");
	scanf("%d", &input_num);
	total = total + input_num;
    }while (input_num != 0);

    printf("�հ�: %d \n", total);
*/

    // while�� =========
    printf("�����Է�: ");
    scanf("%d", &input_num);
    while (input_num !=0){
	    total = total  + input_num;
            scanf("%d", &input_num);
    }

    printf("�հ�: %d \n", total);




}
