#include <stdio.h>
/* ������ ���, 2��, 4��, 6��, 8�ܸ� ���
 * 2���� 2x2���� 4���� 4x4���� 8���� 8x8���� 
 */

void main(){
	int dan;
	int i; 

	for ( dan=2; dan < 9; dan++){
		if (dan % 2 == 0){
			for (dan=2;dan<=8;dan+=2){
				printf("\n== %d �� ==\n", dan);
				for (i=1;i<=dan;i++){
					printf("%d x %d = %d \n", dan, i, dan*i);
				}
			}
		}
	}
}


/*
			if (dan == 2){
				printf("== %d �� ==\n", dan);
				for (i=1;i<=dan;i++){
					printf("%d x %d = %d \n", dan, i, dan*i);
				}
			}
			if (dan == 4){
				printf("== %d �� ==\n", dan);
				for (i=1;i<=dan;i++){
					printf("%d x %d = %d \n", dan, i, dan*i);
				}
			}

			if (dan == 6){
				printf("== %d �� ==\n", dan);
				for (i=1;i<=dan;i++){
					printf("%d x %d = %d \n", dan, i, dan*i);
				}
			}
	
			if (dan == 8){
				printf("== %d �� ==\n", dan);
				for (i=1;i<=dan;i++){
					printf("%d x %d = %d \n", dan, i, dan*i);
				}
			}
                 }
	}
}
*/
