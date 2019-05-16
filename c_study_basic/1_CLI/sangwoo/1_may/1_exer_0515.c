#include <stdio.h>
/* 1에서 100 사이의 정수를 여러개 입력, 합, 평균, 개수를 출력,
 * 단) 0보다 작으면 루프를 끝내고, 100보다 큰 수는 개수, 합, 평균에서 제외하며 계속 다음데이터를 입력 받는다.
 * 활용함수: my_statistic, 리턴타입, 인자는 자유롭게 정의
 * while문 사용
 */


void my_statistic(void)
{
	int sum=0, cnt=0, i, n=0;

	while (1)
	{       
		printf("양의 정수를  입력하시오(음수:끝):  ");
		scanf("%d ", &n);
		if (n < 0){
			break ;
		}else if (n > 100){
		 	printf(" => 100을 초과 하였습니다. 입력범위는 1~100입니다.");
			continue;
		} else {
		cnt += 1;
		sum += n;
		}		
	}

	printf("합계: %d, 평균: %.2f, 개수: %d \n", sum, (double)sum/cnt, cnt );
}

void main (void)
{
	my_statistic();
}

