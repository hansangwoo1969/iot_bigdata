#include <stdio.h>

int main(void){
	int num;
	printf("\n���� �Է�: ");
	scanf("%d", &num);

	// if elseif�� ���� �ִ� if()�� ���̸� ������ elseif ������ Ȯ������
	// �ʰ� ��ü if elseif �������� ���� ���´�
	// if elseif�� ������ ���� �ߺ��� ���� �ʾƾ� �ϸ� �ߺ��� ���� �ʴ�
	// �������� if elseif�� �����Ͽ����� single if�� �ۼ��ϴ� �ͺ���
	// ���ʿ��� ������ üũ�ϴ� ��ɾ� ������ ���� �� �ִ�.
	if (num<0){
 		printf("�Է� ���� 0���� �۴�. \n");
	}else if (num>0){
 		printf("�Է� ���� 0���� ũ��. \n");
	}else if (num==0){
 		printf("�Է� ���� 0�̴�. \n");
	}
	return 0;
}
