#include <stdio.h>
#include "./04_largestAltitude.h"
#include <stdlib.h>

#define max(a,b)((a>b)?a:b)


int largestAltitude(int* gain, int gainSize)
{
	int maxsum =0;
	int sum = 0;
	for(int i = 0 ;i<gainSize ; i++)
	{
		sum = sum +gain[i];
		maxsum = max(sum,maxsum);
	}

	return maxsum;



}