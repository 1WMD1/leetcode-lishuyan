#include <stdio.h>
#include <stdlib.h>

#include "function.h"




/*===============================================================================1、翻转矩阵===============================================================================*/
// 旋转矩阵

// 给你一幅由 N × N 矩阵表示的图像，其中每个像素的大小为 4 字节。请你设计一种算法，将图像旋转 90 度。

// 不占用额外内存空间能否做到？

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/clpgd/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

// int main()
// {
// 	int i,j;
// 	int arr[4][4];
// 	arr_setup_2D(4,4,arr);
// 	printf("打印随机生成的2维数组：\n");
// 	for(i=0 ; i<4 ;i++)
// 	{
// 		for( j=0 ;j<4;j++)
// 		{
// 			printf("%15d",arr[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	rotate(4,4,arr);
// 	printf("打印翻转生成的2维数组：\n");
// 	for(i=0 ; i<4 ;i++)
// 	{
// 		for(j=0 ;j<4;j++)
// 		{
// 			printf("%15d",arr[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	return 0;
// }

/*===============================================================================2、零矩阵===============================================================================*/
// 零矩阵

// 编写一种算法，若M × N矩阵中某个元素为0，则将其所在的行与列清零。

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/ciekh/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
// 





// int main()
// {
// 	int i,j;
// 	int arr[3][4];
// 	arr_setup_2D(3,4,arr);
// 	//生成二维数组
// 	printf("打印随机生成的2维数组：\n");
// 	for(i=0 ; i<3 ;i++)
// 	{
// 		for( j=0 ;j<4;j++)
// 		{
// 			printf("%15d",arr[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	//找到下标
// 	struct array_2D_flag *flags_arr;
// 	flags_arr = search_arr_2D(0,3,4,arr);
// 	for (i = 0; i < 10;i++)
// 	{
// 		if (flags_arr[i].row != 1024)
// 		{
// 			printf("row:%d,col:%d\n",flags_arr[i].row,flags_arr[i].col);
// 		}
// 		else
// 		{
// 			break;
// 		}
		
// 	}
// 	//清零
// 	zero_arr(flags_arr,3,4,arr);
// 	printf("打印清0后的2维数组：\n");
// 	for(i=0 ; i<3 ;i++)
// 	{
// 		for( j=0 ;j<4;j++)
// 		{
// 			printf("%15d",arr[i][j]);
// 		}
// 		printf("\n");
// 	}

// 	return 0;

// } 




/*===============================================================================3、寻找数组的中心索引===============================================================================*/
// 寻找数组的中心索引

// 给你一个整数数组 nums ，请计算数组的 中心下标 。

// 数组 中心下标 是数组的一个下标，其左侧所有元素相加的和等于右侧所有元素相加的和。

// 如果中心下标位于数组最左端，那么左侧数之和视为 0 ，因为在下标的左侧不存在元素。这一点对于中心下标位于数组最右端同样适用。

// 如果数组有多个中心下标，应该返回 最靠近左边 的那一个。如果数组不存在中心下标，返回 -1 。

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/yf47s/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
// 




// int main()
// {
// //随机创建一维数组
// 	int array[10];
// 	arr_setup_1D(10,array);
// 	for(int i =0;i<10 ;i++)
// 	{
// 		printf("第%d个元素是%d\n",i,array[i]);
// 	}
// //寻找索引
// 	int err=center_index_array(array, 10);
// 	if(err == -1){
// 		printf("数组没有找到合适的中心下标\n");
// 	}
// 	else
// 	{
// 		printf("找到了中心下标志%d\n",err);

// 	}
// 	return 0;

// }

/*===============================================================================4、搜索插入位置===============================================================================*/
// 搜索插入位置

// 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

// 请必须使用时间复杂度为 O(log n) 的算法。

 

// 示例 1:

// 输入: nums = [1,3,5,6], target = 5
// 输出: 2

// 示例 2:

// 输入: nums = [1,3,5,6], target = 2
// 输出: 1

// 示例 3:

// 输入: nums = [1,3,5,6], target = 7
// 输出: 4

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/cxqdh/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
// 

int main()
{
	//生成一个一维数组，选择手动生成一个顺序数组
	int  array[10];
	arr_setup_1D(10,array);
	for(int i =0;i<10 ;i++)
	{
		printf("第%d个元素是%d\n",i,array[i]);
	}

	//采用插值查找，效率最高
	int flag = insertSearch(array, 10, 5);
	if(flag == -1){
		printf("err:没有找到目标元素\n");
		//顺序插入
		insert_target(array,10,5);//在一维数组中插入一个元素
		for(int i =0;i<11 ;i++)
		{
			printf("第%d个元素是%d\n",i,array[i]);
		}
	}
	else
	{
		printf("succes:找到了元素%d,位置是第%d个\n",5,flag);
	}
	
	return 0;
}