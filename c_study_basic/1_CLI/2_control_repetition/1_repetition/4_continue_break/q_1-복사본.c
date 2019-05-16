#include <stdio.h>
/* 구구단 출력, 2단, 4단, 6단, 8단만 출력
 * 2단은 2x2까지 4단은 4x4까지 8단은 8x8까지 
 *  continue, break 활용법
 */

void main(){
	int dan;
	int i;
	
	if (dan % 2 != 0){
		continue;
	}else{
		for (dan=0;dan<10;dan++){
			printf("\n == %d 단 ==\n", dan);
			for (i=1; i<10; i++){
				if (i>dan){
					break;
				}
				printf("%d x %d = %d \n", dan, i, dan*i);
			}
		}
	}
}



/*


	for ( dan=2; dan < 9; dan++){
		if (dan % 2 == 0){
			for (dan=2;dan<=8;dan+=2){
				printf("\n== %d 단 ==\n", dan);
				for (i=1;i<=dan;i++){
					printf("%d x %d = %d \n", dan, i, dan*i);
				}
			}
		}
	}
}
*/

/*
			if (dan == 2){
				printf("== %d 단 ==\n", dan);
				for (i=1;i<=dan;i++){
					printf("%d x %d = %d \n", dan, i, dan*i);
				}
			}
			if (dan == 4){
				printf("== %d 단 ==\n", dan);
				for (i=1;i<=dan;i++){
					printf("%d x %d = %d \n", dan, i, dan*i);
				}
			}

			if (dan == 6){
				printf("== %d 단 ==\n", dan);
				for (i=1;i<=dan;i++){
					printf("%d x %d = %d \n", dan, i, dan*i);
				}
			}
	
			if (dan == 8){
				printf("== %d 단 ==\n", dan);
				for (i=1;i<=dan;i++){
					printf("%d x %d = %d \n", dan, i, dan*i);
				}
			}
                 }
	}
}
*/
