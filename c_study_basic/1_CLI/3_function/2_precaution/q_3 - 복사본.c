#include <stdio.h>
/* �Ǻ���ġ ���� ����ϴ� �Լ� ����
 * Ex) 5�Է½� 0���� �����ؼ� �� 5���� �Ǻ���ġ ������ ���
 *     �Ǻ���ġ ������ 0,1,1,2,3,5,8,13,21,34,55
 * �Ǻ���ġ ������ 0�� 1���� ����, ����° ������ �������ʹ� ������ �ΰ��� ��
 */

///////////////

void fibo(int cnt){
	int n = 0;
	int result;

//	n = fibo(n-1) + fibo(n-2)
	for ( n=0; n<cnt; n++){
		//n = fibo(n-1) + fibo(n-2);
        	if (n <= 1){
	        	printf("%d ", n);
	        } else if (n > 1) {
	            //    n = fibo(n-1) + fibo(n-2);
		        result = fibo(n-1) + fibo(n-2);
			printf("%d ", result); 
		//	printf("%d ", n ); 
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
