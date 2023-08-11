#include <stdio.h>
#include "./03_findMaxAverage.h"
#include <stdlib.h>




double findMaxAverage(int* nums, int numsSize, int k){
	double sum  = 0;
	double maxsum = 0;
	double average =0;
	//先计算第一个窗口的总和
	for(int i = 0;i<k;i++)
	{
		sum = sum + nums[i];
	}
	maxsum = sum;
	//滑动窗口
	
	for(int j = k ;j<numsSize;j++)
	{
		sum = sum - nums[j-k] + nums[j];
		maxsum = maxsum > sum ? maxsum : sum;
	}

	average = maxsum/k;

	return average;
}











































