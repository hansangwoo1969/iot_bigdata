//#include <stdio.h>   <== Standard IO(ex: printf, scanf�� ����� �� ����.

void main(){
    int military_serial_number = 3327577501; //  military_serial_number:����, 3327577501:���
    int my_birth_day=690207;
    // const�� constant�� �ǹ��Ѵ�.
    const int ci_military_serial_number = 3327577500;  // ci const int�� �ǹ�
    const int ci_my_birth_day=761003; // ci_my_birth_day: const

    // ���� �ٲ��� �ʰ� ������ �ϰ��� �ϴ� ������ �����ʹ� 
    // ���� �ٲٴ� ���� ��ü�� ������ ����ų �� �ִ�.
    military_serial_number = 33275775566;
    my_birth_day=761003;
    my_birth_day++;

    ci_military_serial_number = 33275775566;
    ci_my_birth_day=761003;
    ci_my_birth_day++;



}
