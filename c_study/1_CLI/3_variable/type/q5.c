#include <stdio.h>
// 사용자가 문자 입력,  아스키코드값을 출력,,
void main(){
    char c_ch;
    
    printf("\n");
    printf("문자를 입력하세요: ");
    scanf("%c", &c_ch);

    printf("입력된 문자 %c의 아스키 값은 %d입니다.\n" , c_ch, c_ch);


}
