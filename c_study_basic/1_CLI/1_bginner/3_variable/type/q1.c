#include <stdio.h>
// ÁÂÇÏ´Ü ÁÂÇ¥ 2 4, ¿ì»ó´Ü ÁÂÇ¥ 4 8 

void main(){
    int x1, x2;
    int y1, y2;
    int horizontal;
    int vertical;
    
    printf("ÁÂÇÏ´Ü ÁÂÇ¥(x1, y1)¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
    scanf("%d %d", &x1, &y1);

    printf("¿ì»ó´Ü ÁÂÇ¥(x2, y2)¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ");
    scanf("%d %d", &x2, &y2);
    
    horizontal = (x2-x1);
    vertical = (y2-y1);
    printf("»ç°¢ÇüÀÇ ³ÐÀÌ´Â: %d", horizontal * vertical); 
} 
