#include <stdio.h>

void main(){
	const unsigned char iot_true=1;
	const unsigned char iot_false=0;
	char condition_A == iot_true
	char condition_A == iot_true
	char condition_A == iot_true
	char condition_A == iot_true
	char condition_A == iot_true
	
	if (condition_A == iot_true){
		if (condition_B == iot_true) {
			if (condition_C == iot_false){
				if (condition_D == iot_false){
					printf("���� �����ϱ� ����� �����Ͽ� ����Ǵ� �ڵ�!\n");
				}
			}
		}
	}
}

// ��ø�� if�� ������ �Ʒ��� ���� &&���迬���ڷ� �ܼ�ȭ �� �� �ִ�.
// �������� ���α׷��ֿ� �ڽ��� ������ ��ƾ�Ŀ﷯ ���ѵ��丵 ���� ���!
if (condition_A == iot_true &&  condition_B == iot_true && condition_C == iot_false && condition_D == iot_false){
	printf("���� �����ϱ� ����� �����Ͽ� ����Ǵ� �ڵ�!\n");
}


	if (condition_A == iot_true){	
		printf("condition A: %d \n", condition_A);
		if (condition_B == iot_true) {
			if (condition_C == iot_false){
				if (condition_D == iot_false){
					printf("���� �����ϱ� ����� �����Ͽ� ����Ǵ� �ڵ�!\n");

