#include <stdio.h>

void main(){
	int altitude=0;

	printf("���� �� %d\n", altitude);

	altitude = altitude+1;
	printf("���� �� %d\n", altitude);
	
	altitude += 1;
	printf("���� �� %d\n", altitude);

	// �ڱ� �ڽ��� ���������߱� ������
	// ����� ���� �� �ڽſ��� �Ҵ��� �ʿ䰡 ����.
	altitude = ++altitude;
	printf("���� �� %d\n", altitude);

	// ++�� ����(increment) ������
	// ����: ++���� (step 1)
	// ++altitude�� �ǹ��ϴ� ���� 
	// altitude = altitude+1�� �ǹ��Ѵ�.
	++altitude;
	printf("���� �� %d\n", altitude);
	
	// ���࿬��
	// ���� 1 ������, ���� ������ �������� ����
	// ������ ��ó��
	printf("���� �� %d\n", ++altitude);
	
	// ���࿬��
	// ���� ������ ���� ������ �� ���� 1����
	// ��ó�� ������
	printf("���� �� %d\n", altitude++);
	printf("���� �� %d\n", altitude);
	

	altitude++;
	printf("���� �� %d\n\n\n", altitude);
     
	// �̷��� ������ ���� �����ڿ��� �����ϰ� ����ȴ�.
	// ����: --���� �Ǵ� ����--
	// --altitude�� �ǹ��ϴ� ����
	// altitude = altitude-1;

	printf("============================================\n");
	--altitude;
	printf("���� �� %d\n", altitude);
	printf("���� �� %d\n", altitude--);
	printf("���� �� %d\n", altitude);


}
