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





// int main()
// {
// 	char str_array[]="the sky is blue ";
// 	printf("str_array:%s\n", str_array);
// 	char * str;
// 	str = reverse_word(str_array);
// 	printf("reverse_string:%s\n",str);
//  	return 0;
// }











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





// int main()
// {
// 	int len;
// 	char* str_array[]={"sadbutsad\0","sad\0"};
// 	for (int i = 0; i < 2; i++)
// 	{
// 		printf("str_array[%d]%s\n",i,str_array[i]);
// 	}

// 	int  flags;

// 	flags = strstr1(str_array,2);

// 	printf("下标:%d\n", flags);

// }










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


// int main()
// {
// 	char str_array[]="the sky is blue";
// 	printf("str_array:%s\n", str_array);
// 	char * str;
// 	str = reverse_string(str_array);
// 	printf("reverse_string:%s\n",str);
//  	return 0;
// }







/* 测试链表*/

int main()
{
	int i;
	SLTDateType x = 5;
	// 动态申请一个节点
	SListNode* mylist;
	mylist = BuySListNode(5);
	SListPrint(mylist);
	printf("===============================\n");
	// 单链表尾插
	SListPushBack(mylist, 4);
	SListPrint(mylist);
	printf("===============================\n");
	printf("===============================\n");
	SListPushBack(mylist, 6);
	SListPushBack(mylist, 7);	
	SListPrint(mylist);
	printf("===============================\n");
	printf("===============================\n");
	printf("===============================\n");
	SListPushFront(&mylist, 1);//标准双重指针
	SListPrint(mylist);
	printf("===============================\n");
	printf("===============================\n");
	printf("===============================\n");
	SListPopBack(&mylist);
	SListPrint(mylist);
	printf("===============================\n");
	printf("===============================\n");
	printf("===============================\n");
	SListPopFront(&mylist);
	SListPrint(mylist);

return 0;	
}


// 给你一个链表的头节点 head 。删除 链表的 中间节点 ，并返回修改后的链表的头节点 head 。

// 长度为 n 链表的中间节点是从头数起第 ⌊n / 2⌋ 个节点（下标从 0 开始），其中 ⌊x⌋ 表示小于或等于 x 的最大整数。

//     对于 n = 1、2、3、4 和 5 的情况，中间节点的下标分别是 0、1、1、2 和 2 。

 

// 示例 1：

// 输入：head = [1,3,4,7,1,2,6]
// 输出：[1,3,4,1,2,6]
// 解释：
// 上图表示给出的链表。节点的下标分别标注在每个节点的下方。
// 由于 n = 7 ，值为 7 的节点 3 是中间节点，用红色标注。
// 返回结果为移除节点后的新链表。 

// 示例 2：

// 输入：head = [1,2,3,4]
// 输出：[1,2,4]
// 解释：
// 上图表示给出的链表。
// 对于 n = 4 ，值为 3 的节点 2 是中间节点，用红色标注。

// 示例 3：

// 输入：head = [2,1]
// 输出：[2]
// 解释：
// 上图表示给出的链表。
// 对于 n = 2 ，值为 1 的节点 1 是中间节点，用红色标注。
// 值为 2 的节点 0 是移除节点 1 后剩下的唯一一个节点。

 

// 提示：

//     链表中节点的数目在范围 [1, 105] 内
//     1 <= Node.val <= 105
//     
//     
//     
//     





/*关于单向不循环链表创建*/

struct listnode
	{
		int key;
		struct listnode* next;
	}


struct listnode*	create_listnode()
{
	struct listnode *node;
	head = (struct listnode *)malloc(sizeof(listnode))
	srand(time(0));
	head->key = rand()%100;
	head->next =  NULL;
	return head;
};
 
void insert_listnode(struct listnode *head ,int x)
{
	struct listnode * newnode;
	newnode = (struct listnode *)malloc(sizeof(listnode))
	head->next = newnode;
	newnode->next = NULL;
	head->key = x;
}

void print_listnode(struct listnode * head ){
	while(head->next != NULL)
	{
		int i = 1;
		printf("第%d个链表节点的元素是%d\n",i ,head->key);
		i = i+1;
		head = head->next;
	}
}


struct listnode * create_listnode()
{
	struct listnode * head;
	head = (struct listnode *)malloc(sizeof(listnode));
	srand(time(0));
	head->key = rand()%100;
	head->prev = NULL;
	head->next = NULL;
	return head;
}

void	init_listnode(struct listnode *head)
{

	head->prev = head;
	head->next = head; 

}

void	insert_listnode(struct listnode *head ,int x)
{
	struct listnode * newnode;
	newnode = (struct listnode *)malloc(sizeof(listnode));
	newnode->key = x;
	struct listnode* tail;
	tail = head;
	while(tail->next != NULL ){
		tail = tail->next;
	}

	tail->next = newnode;
	newnode->prev=tail;
	newnode->next = head;
	head->prev = newnode;
}

void print_listnode(struct listnode *head)
{
	struct listnode * flags;
	flags = head;
	while(flags->next != NULL){
		int i = 1;
		printf("第%d个节点的数值是%d\n", i,flags->key);
		i = i + 1;
		flags = flags->next; 

	}

}

int main()
{
	//1.创建一个单向不循环链表，并且手动或者自动附上初值
	// strct listnode* head_main;
	// head_main = create_listnode();

	// 	//循环创建
 //  	for(int i = 0 ;i<5 ;i++){
 //  		int array[]={1,2,3,4,5};
 //  		insert_listnode(head_main,array[i]);
 //  	}

 //  		//打印链表
 //  	print_listnode(head_main);


	//2.创建一个双向循环链表，并且手动或者自动附上初值
	// struct listnode
	// {
	// 	int key;
	// 	struct listnode* prev;
	// 	struct listnode* next;
	// }
	// struct listnode * head_main;
	// //malloc一个双向循环的节点
	// head_main = create_listnode();

	// //初始化一个双向循环链表
	// init_listnode(head_main);

	// //循环构建一个链表
	// for(int i = 0 ;i<COUNT ;i++)
	// {
	// 	int array[] = {1,2,3,4,5};
	// 	insert_listnode(head_main,array[i]);
	// }

	// //打印循环链表
	// print_listnode();



	//3.创建一个队列，并且手动或者自动附上初值
	struct stack{
		int stack_data[COUNT];
		int top;
	}
	struct stack stack_main;
	//初始化一个栈
	init_stack(stack_main);
	//判断是否为空
	is_empty_of_stack();
	//判断是否为满
	is_full_of_satck();
	//创建一个漫栈
	push_stack();
	pop_stack();

	//打印
	print_stack();
	
	//4.创建一个栈，并且手动或者自动附上初值

	//5.创建一个二维数组，并且手动或者自动附上初值
	
	//6.创建一个一维数组，并且手动或者自动附上初值

}
struct stack *init_stack()
{

}
