#include <stdio.h>
/* 1���� 100 ������ ������ ������ �Է�, ��, ���, ������ ���,
 * ��) 0���� ������ ������ ������, 100���� ū ���� ����, ��, ��տ��� �����ϸ� ��� ���������͸� �Է� �޴´�.
 * Ȱ���Լ�: my_statistic, ����Ÿ��, ���ڴ� �����Ӱ� ����
 * while�� ���
 */


void my_statistic(void)
{
	int sum=0, cnt=0, i, n=0;

	while (1)
	{       
		printf("���� ������  �Է��Ͻÿ�(����:��):  ");
		scanf("%d ", &n);
		if (n < 0){
			break ;
		}else if (n > 100){
		 	printf(" => 100�� �ʰ� �Ͽ����ϴ�. �Է¹����� 1~100�Դϴ�.");
			continue;
		} else {
		cnt += 1;
		sum += n;
		}		
	}

	printf("�հ�: %d, ���: %.2f, ����: %d \n", sum, (double)sum/cnt, cnt );
}

void main (void)
{
	my_statistic();
}

