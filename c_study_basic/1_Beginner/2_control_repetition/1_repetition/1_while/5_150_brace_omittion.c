#include <stdio.h>

void main(){
    int number=0;
    int world=1;
    printf("world sector: %d",world);
    /*
     * while ���Ŀ� 1�� ������ ��쿡�� {}������ �� �ִ�.
     * while(number<50)   
        printf("hello guest %d\n",number++);
    */

    /* {} ������ ���� �ʴ� ���� ����
     * �Ʒ��� ���� ������ Indentation�� �ϰ� ���� statement block���� 
     * �����ڰ� �����Ͽ� ���α׷��� ������ �� �� �ֱ� �����̴�.
     */
    while (number <=50)
	    pritf("hello guest %d!\n",number);
    	    number++;

    }
}
