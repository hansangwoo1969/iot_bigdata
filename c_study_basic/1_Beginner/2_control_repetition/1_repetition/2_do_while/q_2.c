#include <stdio.h>

// �����ﰢ�� �׸���

void main(){
    int row=1;              // ��
    int column=1;           // ��
    const int DEFAULT=5;    // 5�� _ ������ ����

    while(row <= DEFAULT){
	column=1;
	while(column < row){
	    printf("��");
            column++;
	}
    printf("��\n");
    row++;
    }

}


