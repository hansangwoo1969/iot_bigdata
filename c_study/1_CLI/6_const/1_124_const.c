//#include <stdio.h>   <== Standard IO(ex: printf, scanf를 사용할 때 쓴다.

void main(){
    int military_serial_number = 3327577501; //  military_serial_number:변수, 3327577501:상수
    int my_birth_day=690207;
    // const는 constant를 의미한다.
    const int ci_military_serial_number = 3327577500;  // ci const int를 의미
    const int ci_my_birth_day=761003; // ci_my_birth_day: const

    // 값이 바뀌지 않고 참조만 하고자 하는 성격의 데이터는 
    // 값을 바꾸는 행위 자체가 문제를 일으킬 수 있다.
    military_serial_number = 33275775566;
    my_birth_day=761003;
    my_birth_day++;

    ci_military_serial_number = 33275775566;
    ci_my_birth_day=761003;
    ci_my_birth_day++;



}
