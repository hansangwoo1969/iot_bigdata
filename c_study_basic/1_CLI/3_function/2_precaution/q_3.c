#include <stdio.h>
/* �Ǻ���ġ ���� ����ϴ� �Լ� ����
 * Ex) 5�Է½� 0���� �����ؼ� �� 5���� �Ǻ���ġ ������ ���
 *     �Ǻ���ġ ������ 0,1,1,2,3,5,8,13,21,34,55
 * �Ǻ���ġ ������ 0�� 1���� ����, ����° ������ �������ʹ� ������ �ΰ��� ��
 */

void fibo(int cnt){
	int i=0;      // ī��Ʈ ���� ����
	int f_a = 0;
	int f_b = 1;
        int f_c ;

//	if (cnt <= 1){
//		printf("%d ", cnt);
//	}

	if (cnt == 1){
		printf("%d ", f_a);
		return;
	}else if (cnt == 2) {
		printf("%d %d ", f_a, f_b);
		return;
	} else {

	for ( i=2; i < cnt; i++){
		f_c = f_a + f_b;
		printf("%d ", f_c);
		f_a = f_b;	
		f_b = f_c;
	}
	}
}

void main(){
	int cnt;  // �Ǻ���ġ ��ȸ�� ����

	printf("���� �Է�: ");
	scanf("%d", &cnt);
	
	fibo(cnt);
}

/*
f1=0;
f2=1
f3=f2+f1
f4=f3+f2
fn = fn-1 + fn-2
*/
