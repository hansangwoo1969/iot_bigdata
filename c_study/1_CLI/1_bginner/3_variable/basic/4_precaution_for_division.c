#include <stdio.h>

void main(){
    int numerator=1;
    int denominator=2;

    // int num1; <=  variable name, (readibility).
    // int num2;
    printf("%d/%d=%d\n", numerator, denominator, numerator/denominator);

    //한번 선언한 변수의 값을 변경할때에는 변수명 앞에 
    // 타입을 지정할 필요가 없다.


     float float_numerator=1;
     float float_denominator=2;
     // %d인 경우 visual studio C 컴파일러는 소수점 이하를 무시한다.



     // 아래코드는 %f이지만 나눗셈 결과가 정수이기 때문에 compile시 아래
     // warning 메시지로 출력한다.
     //출력은 실수로 되지만 정수연산을 한 결과와 동일하다.
     //서식문자열 %f에 double형식의 인수가 필요하지만 variable인수 3의 형식이
     // int입니다.
     //printf("%d/%d=%f\n", numerator, denominator, numerator/denominator);
     
     //정수 연산 결과를 float로 타입캐스팅 시도
     // 컴파일러에 따라 warning, compile error 또는 runtime error를 피할 수 
     // 있으나 정수형 결과를 단순히 변환 했으므로 손실되는 값이 존재한다.
     printf("%d/%d=%f\n", numerator, denominator, (float)(numerator/denominator));

     //��� float�� ������ ����߱� ������ ����ȯ�߱� ������ ������ ����� float�̴�.
     //���� �սǵǴ� ���� ����. 
     printf("%d/%d=%f\n", numerator, denominator, (float)numerator/(float)denominator);
     
     // ����, �и� ��� float�� ������ ����߱� ������ ����ȯ�� �ʿ����
     // �սǵǴ� ���� ����.
     printf("%f/%f=%f\n",float_numerator, float_denominator, float_numerator/float_denominator);

}

