#include <stdio.h>

// 1. ���α׷� ����ڷκ��� ���� ������ �ϳ� �Է� �޾Ƽ� ,
// �� �� ��ŭ "Hello world!"�� ����ϴ� ���α׷��� �ۼ�

void main(){
    int num=0;

    printf("���� ������ �Է��ϼ���: ");
    scanf("%d", &num);

    while (num){
	printf("Hello world!\n" , num);
	num--;
    }
}
