#include <stdio.h>
#pragma warning (disable:4996)

// 10개의 소수를 출력,

int main() {
	int i=0, j=0, count=1;			
	
	printf("1 ");
	for (i = 1; i < 9999; i++) {
		for (j = 2; j <= i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			if (count < 10) {
				printf("%d ", i);
				count += 1;
			}
		}
	}
	
	return 0;
}

