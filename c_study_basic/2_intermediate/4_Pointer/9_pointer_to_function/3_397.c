#include <stdio.h>

void SoSimpleFunc(void) {
	printf("I'm so simple");
}

void main(){
	int num = 20;
	void* ptr;

	ptr = &num;
	printf("%p \n", ptr);
	// �Ʒ� �ڵ�� �����Ͻ� ������ �߻��Ѵ�.
	// point to voidŸ���� ���� �����޸𸮿� ���� ���ȴ�.
	//printf("num: %d\n", *(ptr))

	ptr = &SoSimpleFunc;
	printf("%p \n", ptr);
	return 0;
}
