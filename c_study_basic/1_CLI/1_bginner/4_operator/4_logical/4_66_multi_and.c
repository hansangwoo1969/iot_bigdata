#include <stdio.h>
/* ³í¸® AND Áø¸®Ç¥
 * AÁ¶°Ç BÁ¶°Ç CÁ¶°Ç  °á°ú
 * °ÅÁþ  °ÅÁþ   °ÅÁþ  °ÅÁþ
 * °ÅÁþ  °ÅÁþ   Âü    °ÅÁþ
 * °ÅÁþ   Âü    °ÅÁþ  °ÅÁþ
 * °ÅÁþ   Âü    Âü    °ÅÁþ
 * Âü	 °ÅÁþ  °ÅÁþ   °ÅÁþ
 * Âü    °ÅÁþ  Âü     °ÅÁþ	
 * Âü    Âü    °ÅÁþ   °ÅÁþ
 * Âü    Âü    Âü     Âü
*/

void main(){
    int num1=10, num2=12, num3=13, result;

    printf("\n");
    printf("num1: %d, num2: %d, num3: %d \n", num1, num2, num3);
    printf("========================================\n");
    // °ÅÁþ && °ÅÁþ && °ÅÁþ
    result = (num1 == 0 && num2 == 1 && num3 == 1);
    printf(" (num1 == 0 && num2 == 1 && num3 == 1)     => Æò°¡°á°ú: %d\n", result);
    
    // °ÅÁþ && °ÅÁþ && Âü
    result = (num1 == 0 && num2 == 1 && num3 == 13);
    printf(" (num1 == 0 && num2 == 1 && num3 == 13)    => Æò°¡°á°ú: %d\n", result);
    
    // °ÅÁþ && Âü && °ÅÁþ
    result = (num1 == 0 && num2 == 12 && num3 == 1);
    printf(" (num1 == 0 && num2 == 12 && num3 == 1)    => Æò°¡°á°ú: %d\n", result);

    // °ÅÁþ && Âü && Âü
    result = (num1 == 0 && num2 == 12 && num3 == 13);
    printf(" (num1 == 0 && num2 == 12 && num3 == 13)   => Æò°¡°á°ú: %d\n", result);

    // Âü && °ÅÁþ && °ÅÁþ
    result = (num1 == 10 && num2 == 1 && num3 == 1);
    printf(" (num1 == 10 && num2 == 1 && num3 == 1)    => Æò°¡°á°ú: %d\n", result);

    // Âü && °ÅÁþ && Âü
    result = (num1 == 10 && num2 == 1 && num3 == 13);
    printf(" (num1 == 10 && num2 == 1 && num3 == 13)   => Æò°¡°á°ú: %d\n", result);

    // Âü && Âü && °ÅÁþ
    result = (num1 == 10 && num2 == 12 && num3 == 1);
    printf(" (num1 == 10 && num2 == 12 && num3 == 1)   => Æò°¡°á°ú: %d\n", result);

    // Âü && Âü && °ÅÁþ
    result = (num1 == 10 && num2 == 12 && num3 == 13);
    printf(" (num1 == 10 && num2 == 12 && num3 == 13)   => Æò°¡°á°ú: %d\n", result);





}
