#include <stdio.h>
#include "./02_moveZeroes.h"
#include <stdlib.h>
void moveZeroes(int* nums, int numsSize){
	int * new_arr; 
	new_arr = (int *)malloc(sizeof(int)*numsSize);
	int front = 0;
	int last  = numsSize-1;
	for(int i = 0; i < numsSize ; i++ )
	{
		if(nums[i] == 0)
		{
			new_arr[last] = nums[i];
			last--;
		}
		else
		{
			new_arr[front] = nums[i];
			front++;
		}
	}

	for(int i = 0; i < numsSize ; i++ )
	{
		nums[i] = new_arr[i];
	}

	free(new_arr);
}