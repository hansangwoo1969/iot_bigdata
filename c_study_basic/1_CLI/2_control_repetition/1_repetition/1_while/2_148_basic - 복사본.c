#include <stdio.h>

/*
  while([���|����|ǥ����]){
  step1] while ()�ȿ� �ִ� ǥ������ ������ ���Ѵ�.
  step2] ���� ����� ��(1)�̸� ������ ����� 0�� �ƴϰ��̸�,
         while������ statement block�� �����Ѵ�.
         ����(0)�̸� statement block�� ���� ���´�.
  step3] step2���� ���ΰ�� step1�� �̵��Ѵ�.
  ��Ÿ���� round bracket () / brace {} / square bracket []  
*/

void main(){
    int number=0;
    while(number<50){   // while([���|����|ǥ����])
        printf("%d_hello world!\n",(number+1));
	number++;

    }
}
