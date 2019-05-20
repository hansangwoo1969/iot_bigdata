#include <stdio.h>

void main(){
    int number=0;
    int world=1;
    printf("world sector: %d",world);
    /*
     * while 이후에 1줄 라인인 경우에는 {}생략할 수 있다.
     * while(number<50)   
        printf("hello guest %d\n",number++);
    */

    /* {} 생략은 하지 않는 것이 좋다
     * 아래와 같이 동일한 Indentation을 하고 같은 statement block으로 
     * 개발자가 착각하여 프로그램이 오동작 될 수 있기 때문이다.
     */
    while (number <=50)
	    pritf("hello guest %d!\n",number);
    	    number++;

    }
}
