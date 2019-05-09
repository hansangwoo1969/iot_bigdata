#include <stdio.h>

void main(){
    int numerator=1;
    int denominator=2;

    // int num1; <=  variable name, (readibility).
    // int num2;
    printf("%d/%d=%d\n", numerator, denominator, numerator/denominator);

    //í•œë²ˆ ì„ ì–¸í•œ ë³€ìˆ˜ì˜ ê°’ì„ ë³€ê²½í• ë•Œì—ëŠ” ë³€ìˆ˜ëª… ì•žì— 
    // íƒ€ìž…ì„ ì§€ì •í•  í•„ìš”ê°€ ì—†ë‹¤.


     float float_numerator=1;
     float float_denominator=2;
     // %dì¸ ê²½ìš° visual studio C ì»´íŒŒì¼ëŸ¬ëŠ” ì†Œìˆ˜ì  ì´í•˜ë¥¼ ë¬´ì‹œí•œë‹¤.



     // ì•„ëž˜ì½”ë“œëŠ” %fì´ì§€ë§Œ ë‚˜ëˆ—ì…ˆ ê²°ê³¼ê°€ ì •ìˆ˜ì´ê¸° ë•Œë¬¸ì— compileì‹œ ì•„ëž˜
     // warning ë©”ì‹œì§€ë¡œ ì¶œë ¥í•œë‹¤.
     //ì¶œë ¥ì€ ì‹¤ìˆ˜ë¡œ ë˜ì§€ë§Œ ì •ìˆ˜ì—°ì‚°ì„ í•œ ê²°ê³¼ì™€ ë™ì¼í•˜ë‹¤.
     //ì„œì‹ë¬¸ìžì—´ %fì— doubleí˜•ì‹ì˜ ì¸ìˆ˜ê°€ í•„ìš”í•˜ì§€ë§Œ variableì¸ìˆ˜ 3ì˜ í˜•ì‹ì´
     // intìž…ë‹ˆë‹¤.
     //printf("%d/%d=%f\n", numerator, denominator, numerator/denominator);
     
     //ì •ìˆ˜ ì—°ì‚° ê²°ê³¼ë¥¼ floatë¡œ íƒ€ìž…ìºìŠ¤íŒ… ì‹œë„
     // ì»´íŒŒì¼ëŸ¬ì— ë”°ë¼ warning, compile error ë˜ëŠ” runtime errorë¥¼ í”¼í•  ìˆ˜ 
     // ìžˆìœ¼ë‚˜ ì •ìˆ˜í˜• ê²°ê³¼ë¥¼ ë‹¨ìˆœížˆ ë³€í™˜ í–ˆìœ¼ë¯€ë¡œ ì†ì‹¤ë˜ëŠ” ê°’ì´ ì¡´ìž¬í•œë‹¤.
     printf("%d/%d=%f\n", numerator, denominator, (float)(numerator/denominator));

     //¸ðµÎ floatÇü º¯¼ö¸¦ »ç¿ëÇß±â ¶§¹®¿¡ Çüº¯È¯Çß±â ¶§¹®¿¡ ¿¬»êÀÇ °á°úµµ floatÀÌ´Ù.
     //µû¶ó¼­ ¼Õ½ÇµÇ´Â °ªÀº ¾ø´Ù. 
     printf("%d/%d=%f\n", numerator, denominator, (float)numerator/(float)denominator);
     
     // ºÐÀÚ, ºÐ¸ð ¸ðµÎ floatÇü º¯¼ö¸¦ »ç¿ëÇß±â ¶§¹®¿¡ Çüº¯È¯µµ ÇÊ¿ä¾ø°í
     // ¼Õ½ÇµÇ´Â °ªµµ ¾ø´Ù.
     printf("%f/%f=%f\n",float_numerator, float_denominator, float_numerator/float_denominator);

}

