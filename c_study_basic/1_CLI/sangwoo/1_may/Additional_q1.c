#include <stdio.h>

void my_statistic(void);

void main(){
	my_statistic();
}

void my_statistic(void){

	int denominator=0;
	int input_integer=999;
	int totalSum=0;
	double mean;

	while(input_integer>=0){
	
		printf("���� ������ �Է��Ͻÿ�(����:��) :");
		scanf("%d",&input_integer);

		if(input_integer<=100 && input_integer>=0){
			totalSum = totalSum + input_integer;
			denominator = denominator + 1;
		}else if(input_integer>100){
			printf(" 100�� �ʰ��Ͽ����ϴ�. �Է� ������ 1~100�Դϴ�.\n");
		}
	}
	if(denominator==0){
		printf("\n�Է� ���� ������ �����ϴ�.");
		return;
	}
	mean = (double)totalSum/denominator;

	printf("�հ�:%d, ���:%f, ����:%d",totalSum, mean, denominator);
}
