#include <stdio.h>
/* �������� �����ϴ� ��� A�� Z�� ���ϴ����α׷� �ۼ�
 *     A Z
 *   + Z A
 *   ------
 *     99 
 */

void main(){
	int A = 9;
	int Z = 0;

	A = 9-Z;

	for (Z = 0; Z < 9; Z++){
		A = 9-Z;
		printf("(AZ)%d%d + (ZA)%d%d =  %d \n",A,Z,Z,A, (A*10+Z)+(Z*10+A)); 
		
	}
}
