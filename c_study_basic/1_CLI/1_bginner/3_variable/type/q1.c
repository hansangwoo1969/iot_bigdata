#include <stdio.h>
// ���ϴ� ��ǥ 2 4, ���� ��ǥ 4 8 

void main(){
    int x1, x2;
    int y1, y2;
    int horizontal;
    int vertical;
    
    printf("���ϴ� ��ǥ(x1, y1)�� �Է��ϼ���: ");
    scanf("%d %d", &x1, &y1);

    printf("���� ��ǥ(x2, y2)�� �Է��ϼ���: ");
    scanf("%d %d", &x2, &y2);
    
    horizontal = (x2-x1);
    vertical = (y2-y1);
    printf("�簢���� ���̴�: %d", horizontal * vertical); 
} 
