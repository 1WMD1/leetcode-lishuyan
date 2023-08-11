
/*子数组最大平均数 I


给你一个由 n 个元素组成的整数数组 nums 和一个整数 k 。

请你找出平均数最大且 长度为 k 的连续子数组，并输出该最大平均数。

任何误差小于 10-5 的答案都将被视为正确答案。

 

示例 1：

输入：nums = [1,12,-5,-6,50,3], k = 4
输出：12.75
解释：最大平均数 (12-5-6+50)/4 = 51/4 = 12.75

示例 2：

输入：nums = [5], k = 1
输出：5.00000

*/

#include <stdio.h>
#include "./03_findMaxAverage.h"
#include <stdlib.h>

int main()
{
	//定义一个nums  
	int nums[] ={1,2,3,4,56,7};
	double a = findMaxAverage(nums, 6, 4);
	printf("%f\n", a);
	return 0;
}