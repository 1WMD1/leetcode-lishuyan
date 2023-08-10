
/*移动零


 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

请注意 ，必须在不复制数组的情况下原地对数组进行操作。

 

示例 1:

输入: nums = [0,1,0,3,12]
输出: [1,3,12,0,0]

示例 2:

输入: nums = [0]
输出: [0]

 

提示:

    1 <= nums.length <= 104
    -231 <= nums[i] <= 231 - 1

 

进阶：你能尽量减少完成的操作次数吗？

*/
#include <stdio.h>
#include "./02_moveZeroes.h"
#include <stdlib.h>

int main()
{
	//定义一个一维的整型数组
	int arr[] = {1,2,3,4,0,5,0,2};
	//将数字移动到最后面
	int arrSize = 8;
	printf("arrSize:%d\n", arrSize);
	moveZeroes(arr, arrSize);
	printf("===============================\n");
	for(int i = 0; i < arrSize ; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}