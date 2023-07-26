#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"
#include <stdbool.h>




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

// int main()
// {
// 	//生成一个一维数组，选择手动生成一个顺序数组
// 	int  array[10];
// 	arr_setup_1D(10,array);
// 	for(int i =0;i<10 ;i++)
// 	{
// 		printf("第%d个元素是%d\n",i,array[i]);
// 	}

// 	//采用插值查找，效率最高
// 	int flag = insertSearch(array, 10, 5);
// 	if(flag == -1){
// 		printf("err:没有找到目标元素\n");
// 		//顺序插入
// 		insert_target(array,10,5);//在一维数组中插入一个元素
// 		for(int i =0;i<11 ;i++)
// 		{
// 			printf("第%d个元素是%d\n",i,array[i]);
// 		}
// 	}
// 	else
// 	{
// 		printf("succes:找到了元素%d,位置是第%d个\n",5,flag);
// 	}
	
// 	return 0;
// }

/*===============================================================================5、合并区间===============================================================================*/
// 合并区间

// 以数组 intervals 表示若干个区间的集合，其中单个区间为 intervals[i] = [starti, endi] 。请你合并所有重叠的区间，并返回 一个不重叠的区间数组，该数组需恰好覆盖输入中的所有区间 。

 

// 示例 1：

// 输入：intervals = [[1,3],[2,6],[8,10],[15,18]]
// 输出：[[1,6],[8,10],[15,18]]
// 解释：区间 [1,3] 和 [2,6] 重叠, 将它们合并为 [1,6].

// 示例 2：

// 输入：intervals = [[1,4],[4,5]]
// 输出：[[1,5]]
// 解释：区间 [1,4] 和 [4,5] 可被视为重叠区间。

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/c5tv3/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。



// int main()
// {
// 	//生成数组
	
// 	struct section array[3];
// 	for (int i = 0; i < 3; i++) 
// 		{
//         	printf("请输入第 %d 个元素的值：", i + 1);
//         	scanf("%d", &array[i].left);
//         	scanf("%d", &array[i].right);
//     	}
//     printf("=====================================================\n");
//      for (int i = 0; i < 3; i++) 
// 		{
//         	printf(" [%d,%d] \n", array[i].left,array[i].right);
//     	}
//     //排序
//    printf("=====================================================\n");
//     InsertSort_section(array, 3);
//  	for (int i = 0; i < 3; i++) 
// 		{
//         	printf(" [%d,%d] \n", array[i].left,array[i].right);
//     	}
    
// 	//合并
//    printf("=====================================================\n");
// 	merge_section(array,3);
//  	for (int i = 0; i < 3; i++) 
// 		{
//         	printf(" [%d,%d] \n", array[i].left,array[i].right);
//     	}	
// 	//输出    
// 	return 0;

// }

/*===============================================================================6、最长公共前缀===============================================================================*/
// 最长公共前缀

// 编写一个函数来查找字符串数组中的最长公共前缀。

// 如果不存在公共前缀，返回空字符串 ""。

 

// 示例 1：

// 输入：strs = ["flower","flow","flight"]
// 输出："fl"

// 示例 2：

// 输入：strs = ["dog","racecar","car"]
// 输出：""
// 解释：输入不存在公共前缀。

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/ceda1/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。




// int main() 
// {
// 	char *strs[] = {"floee", "flooow", "fllww"};//非整数直接这样赋值就行了
// 	printf("%ld\n",strlen(strs[0]));
 
//     int strsSize = sizeof(strs) / sizeof(strs[0]);
//     printf("strsSize：%d\n", strsSize);

//     char *result = longestCommonPrefix(strs, strsSize);
//     printf("最长公共前缀：%s\n", result);
    
//     free(result);
//     return 0;
// }














/*===============================================================================7、最长回文子串===============================================================================*/
// 最长回文子串

// 给你一个字符串 s，找到 s 中最长的回文子串。

// 如果字符串的反序与原始字符串相同，则该字符串称为回文字符串。

 

// 示例 1：

// 输入：s = "babad"
// 输出："bab"
// 解释："aba" 同样是符合题意的答案。

// 示例 2：

// 输入：s = "cbbd"
// 输出："bb"

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/conm7/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
// 
// 

// int main()
// {
// 	char str_array[]="babad";
// 	char * strs; 
// 	strs = longestPalindrome(str_array);
// 	printf("最长回文子串：%s\n", strs);
// }


















/*===============================================================================8、翻转字符串里的单词===============================================================================*/
// 翻转字符串里的单词

// 给你一个字符串 s ，请你反转字符串中 单词 的顺序。

// 单词 是由非空格字符组成的字符串。s 中使用至少一个空格将字符串中的 单词 分隔开。

// 返回 单词 顺序颠倒且 单词 之间用单个空格连接的结果字符串。

// 注意：输入字符串 s中可能会存在前导空格、尾随空格或者单词间的多个空格。返回的结果字符串中，单词间应当仅用单个空格分隔，且不包含任何额外的空格。

 

// 示例 1：

// 输入：s = "the sky is blue"
// 输出："blue is sky the"

// 示例 2：

// 输入：s = "  hello world  "
// 输出："world hello"
// 解释：反转后的字符串中不能存在前导空格和尾随空格。

// 示例 3：

// 输入：s = "a good   example"
// 输出："example good a"
// 解释：如果两个单词间有多余的空格，反转后的字符串需要将单词间的空格减少到仅有一个。

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/crmp5/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。





int main()
{
	char str_array[]="the sky is blue";
	printf("str_array:%s\n", str_array);
	char * str;
	str = reverse_string(str_array);
	printf("reverse_string:%s\n",str);
 	return 0;
}











/*===============================================================================9、实现 strStr()===============================================================================*/
// 实现 strStr()
// 给你两个字符串 haystack 和 needle ，请你在 haystack 字符串中找出 needle 字符串的第一个匹配项的下标（下标从 0 开始）。如果 needle 不是 haystack 的一部分，则返回  -1 。

 

// 示例 1：

// 输入：haystack = "sadbutsad", needle = "sad"
// 输出：0
// 解释："sad" 在下标 0 和 6 处匹配。
// 第一个匹配项的下标是 0 ，所以返回 0 。

// 示例 2：

// 输入：haystack = "leetcode", needle = "leeto"
// 输出：-1
// 解释："leeto" 没有在 "leetcode" 中出现，所以返回 -1 。

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/cm5e2/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
















/*===============================================================================10、实现 反转字符串===============================================================================*/

// 反转字符串

// 编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 s 的形式给出。

// 不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。

 

// 示例 1：

// 输入：s = ["h","e","l","l","o"]
// 输出：["o","l","l","e","h"]

// 示例 2：

// 输入：s = ["H","a","n","n","a","h"]
// 输出：["h","a","n","n","a","H"]

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/cacxi/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。















/*===============================================================================11、数组拆分 I===============================================================================*/

// 数组拆分 I

// 给定长度为 2n 的整数数组 nums ，你的任务是将这些数分成 n 对, 例如 (a1, b1), (a2, b2), ..., (an, bn) ，使得从 1 到 n 的 min(ai, bi) 总和最大。

// 返回该 最大总和 。

 

// 示例 1：

// 输入：nums = [1,4,3,2]
// 输出：4
// 解释：所有可能的分法（忽略元素顺序）为：
// 1. (1, 4), (2, 3) -> min(1, 4) + min(2, 3) = 1 + 2 = 3
// 2. (1, 3), (2, 4) -> min(1, 3) + min(2, 4) = 1 + 2 = 3
// 3. (1, 2), (3, 4) -> min(1, 2) + min(3, 4) = 1 + 3 = 4
// 所以最大总和为 4

// 示例 2：

// 输入：nums = [6,2,6,5,1,2]
// 输出：9
// 解释：最优的分法为 (2, 1), (2, 5), (6, 6). min(2, 1) + min(2, 5) + min(6, 6) = 1 + 2 + 6 = 9

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/c24he/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。















/*===============================================================================12、两数之和 II - 输入有序数组===============================================================================*/

// 两数之和 II - 输入有序数组

// 给你一个下标从 1 开始的整数数组 numbers ，该数组已按 非递减顺序排列  ，请你从数组中找出满足相加之和等于目标数 target 的两个数。如果设这两个数分别是 numbers[index1] 和 numbers[index2] ，则 1 <= index1 < index2 <= numbers.length 。

// 以长度为 2 的整数数组 [index1, index2] 的形式返回这两个整数的下标 index1 和 index2。

// 你可以假设每个输入 只对应唯一的答案 ，而且你 不可以 重复使用相同的元素。

// 你所设计的解决方案必须只使用常量级的额外空间。
 

// 示例 1：

// 输入：numbers = [2,7,11,15], target = 9
// 输出：[1,2]
// 解释：2 与 7 之和等于目标数 9 。因此 index1 = 1, index2 = 2 。返回 [1, 2] 。

// 示例 2：

// 输入：numbers = [2,3,4], target = 6
// 输出：[1,3]
// 解释：2 与 4 之和等于目标数 6 。因此 index1 = 1, index2 = 3 。返回 [1, 3] 。

// 示例 3：

// 输入：numbers = [-1,0], target = -1
// 输出：[1,2]
// 解释：-1 与 0 之和等于目标数 -1 。因此 index1 = 1, index2 = 2 。返回 [1, 2] 。

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/cnkjg/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。















/*===============================================================================13、移除元素===============================================================================*/

// 移除元素

// 给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

// 不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

// 元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

 

// 说明:

// 为什么返回数值是整数，但输出的答案是数组呢?

// 请注意，输入数组是以「引用」方式传递的，这意味着在函数里修改输入数组对于调用者是可见的。

// 你可以想象内部操作如下:

// // nums 是以“引用”方式传递的。也就是说，不对实参作任何拷贝
// int len = removeElement(nums, val);

// // 在函数里修改输入数组对于调用者是可见的。
// // 根据你的函数返回的长度, 它会打印出数组中 该长度范围内 的所有元素。
// for (int i = 0; i < len; i++) {
//     print(nums[i]);
// }

 

// 示例 1：

// 输入：nums = [3,2,2,3], val = 3
// 输出：2, nums = [2,2]
// 解释：函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。你不需要考虑数组中超出新长度后面的元素。例如，函数返回的新长度为 2 ，而 nums = [2,2,3,3] 或 nums = [2,2,0,0]，也会被视作正确答案。

// 示例 2：

// 输入：nums = [0,1,2,2,3,0,4,2], val = 2
// 输出：5, nums = [0,1,4,0,3]
// 解释：函数应该返回新的长度 5, 并且 nums 中的前五个元素为 0, 1, 3, 0, 4。注意这五个元素可为任意顺序。你不需要考虑数组中超出新长度后面的元素。

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/cwuyj/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
















/*===============================================================================14、最大连续1的个数===============================================================================*/

// 最大连续1的个数

// 给定一个二进制数组 nums ， 计算其中最大连续 1 的个数。

 

// 示例 1：

// 输入：nums = [1,1,0,1,1,1]
// 输出：3
// 解释：开头的两位和最后的三位都是连续 1 ，所以最大连续 1 的个数是 3.

// 示例 2:

// 输入：nums = [1,0,1,1,0,1]
// 输出：2

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/cd71t/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。















/*===============================================================================15、长度最小的子数组===============================================================================*/

// 长度最小的子数组

// 给定一个含有 n 个正整数的数组和一个正整数 target 。

// 找出该数组中满足其和 ≥ target 的长度最小的 连续子数组 [numsl, numsl+1, ..., numsr-1, numsr] ，并返回其长度。如果不存在符合条件的子数组，返回 0 。

 

// 示例 1：

// 输入：target = 7, nums = [2,3,1,2,4,3]
// 输出：2
// 解释：子数组 [4,3] 是该条件下的长度最小的子数组。

// 示例 2：

// 输入：target = 4, nums = [1,4,4]
// 输出：1

// 示例 3：

// 输入：target = 11, nums = [1,1,1,1,1,1,1,1]
// 输出：0

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/c0w4r/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。















/*===============================================================================16、反转字符串中的单词 III===============================================================================*/

// 反转字符串中的单词 III

// 给定一个字符串 s ，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。

 

// 示例 1：

// 输入：s = "Let's take LeetCode contest"
// 输出："s'teL ekat edoCteeL tsetnoc"

// 示例 2:

// 输入： s = "God Ding"
// 输出："doG gniD"

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/c8su7/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。















/*===============================================================================17、寻找旋转排序数组中的最小值===============================================================================*/

// 寻找旋转排序数组中的最小值
// 已知一个长度为 n 的数组，预先按照升序排列，经由 1 到 n 次 旋转 后，得到输入数组。例如，原数组 nums = [0,1,2,4,5,6,7] 在变化后可能得到：

//     若旋转 4 次，则可以得到 [4,5,6,7,0,1,2]
//     若旋转 7 次，则可以得到 [0,1,2,4,5,6,7]

// 注意，数组 [a[0], a[1], a[2], ..., a[n-1]] 旋转一次 的结果为数组 [a[n-1], a[0], a[1], a[2], ..., a[n-2]] 。

// 给你一个元素值 互不相同 的数组 nums ，它原来是一个升序排列的数组，并按上述情形进行了多次旋转。请你找出并返回数组中的 最小元素 。

// 你必须设计一个时间复杂度为 O(log n) 的算法解决此问题。

 

// 示例 1：

// 输入：nums = [3,4,5,1,2]
// 输出：1
// 解释：原数组为 [1,2,3,4,5] ，旋转 3 次得到输入数组。

// 示例 2：

// 输入：nums = [4,5,6,7,0,1,2]
// 输出：0
// 解释：原数组为 [0,1,2,4,5,6,7] ，旋转 4 次得到输入数组。

// 示例 3：

// 输入：nums = [11,13,15,17]
// 输出：11
// 解释：原数组为 [11,13,15,17] ，旋转 4 次得到输入数组。

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/c3ki5/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。















/*===============================================================================18、删除排序数组中的重复项===============================================================================*/

// 删除排序数组中的重复项

// 给你一个 升序排列 的数组 nums ，请你 原地 删除重复出现的元素，使每个元素 只出现一次 ，返回删除后数组的新长度。元素的 相对顺序 应该保持 一致 。然后返回 nums 中唯一元素的个数。

// 考虑 nums 的唯一元素的数量为 k ，你需要做以下事情确保你的题解可以被通过：

//     更改数组 nums ，使 nums 的前 k 个元素包含唯一元素，并按照它们最初在 nums 中出现的顺序排列。nums 的其余元素与 nums 的大小不重要。
//     返回 k 。

// 判题标准:

// 系统会用下面的代码来测试你的题解:

// int[] nums = [...]; // 输入数组
// int[] expectedNums = [...]; // 长度正确的期望答案

// int k = removeDuplicates(nums); // 调用

// assert k == expectedNums.length;
// for (int i = 0; i < k; i++) {
//     assert nums[i] == expectedNums[i];
// }

// 如果所有断言都通过，那么您的题解将被 通过。

 

// 示例 1：

// 输入：nums = [1,1,2]
// 输出：2, nums = [1,2,_]
// 解释：函数应该返回新的长度 2 ，并且原数组 nums 的前两个元素被修改为 1, 2 。不需要考虑数组中超出新长度后面的元素。

// 示例 2：

// 输入：nums = [0,0,1,1,1,2,2,3,3,4]
// 输出：5, nums = [0,1,2,3,4]
// 解释：函数应该返回新的长度 5 ， 并且原数组 nums 的前五个元素被修改为 0, 1, 2, 3, 4 。不需要考虑数组中超出新长度后面的元素。

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/cq376/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
// 














/*===============================================================================19、移动零===============================================================================*/

// 移动零

// 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

// 请注意 ，必须在不复制数组的情况下原地对数组进行操作。

 

// 示例 1:

// 输入: nums = [0,1,0,3,12]
// 输出: [1,3,12,0,0]

// 示例 2:

// 输入: nums = [0]
// 输出: [0]

// 作者：LeetCode
// 链接：https://leetcode.cn/leetbook/read/array-and-string/c6u02/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
// 














/*===============================================================================9、实现 strStr()===============================================================================*/


/*===============================================================================9、实现 strStr()===============================================================================*/


/*===============================================================================9、实现 strStr()===============================================================================*/


/*===============================================================================9、实现 strStr()===============================================================================*/


