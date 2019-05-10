#include <stdio.h>

// 직각삼각형 그리기

void main(){
    int row=1;              // 행
    int column=1;           // 열
    const int DEFAULT=5;    // 5행 _ 과제물 사진

    while(row <= DEFAULT){
	column=1;
	while(column < row){
	    printf("○");
            column++;
	}
    printf("★\n");
    row++;
    }

}


