#include <stdio.h>
#include "./07_Number_of_Recent_Calls.h"
#include <stdlib.h>
#include <stdbool.h>
int main()
{
	Queue *pq; 
	recentCounterinit(pq);
	int count;
	for(int i = 0; i<100; i++)
	{
		scanf("请输入时间%d", &t);
		count = recentCounterping(pq, t);
		printf("次数：%d\n", count);
	}


	return 0;
}

