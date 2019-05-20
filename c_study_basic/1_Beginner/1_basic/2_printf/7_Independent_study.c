#include <stdio.h>

void main(){

    // %[-또는 생략][전체크기][포맷스트링]
    // -는 왼쪽 정렬, 생략하면 오른쪽 정렬
    // 전체크기: 매칭되는 값이 차지하는 byte공간
    // 포맷스트링: c, d, f, lf,,,
    printf("\n");
    printf("=======  전체 왼쪽 정렬=========\n");
    printf("%-8s %-14s %5s \n", "이 름", "전공학과", "학년");
    printf("%-8s %-14s %5d \n", "조 문수", "컴퓨터공학", 3);
    printf("%-8s %-14s %5d \n", "김 혜경", "전자공학", 1);
    printf("%-8s %-14s %5d \n\n", "한 상우", "경제학과", 4);
    
    printf("======= 전체 오른쪽 정렬=========\n");
    printf("%8s %14s %5s \n", "이 름", "전공학과", "학년");
    printf("%8s %14s %5d \n", "조 문수", "컴퓨터공학", 3);
    printf("%8s %14s %5d \n", "김 혜경", "전자공학", 1);
    printf("%8s %14s %5d \n\n", "한 상우", "경제학과", 4);

    printf("======= 전체 중앙 정렬=========\n");
    printf("%-8s %14s %5s \n", "  이름 ", "전공학과 ", "  학년");
    printf("%-8s %14s %5d \n", " 조문수", "컴퓨터공학", 3);
    printf("%-8s %14s %5d \n", " 김혜경", "전자공학 ", 1);
    printf("%-8s %14s %5d \n\n", " 한상우", "경제학과 ", 4);

}
