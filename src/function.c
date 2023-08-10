#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <assert.h>
#include <stdbool.h>

//生成一个数组
void arr_setup_1D(int len,int* array){

	//自动赋值
		// //设置随机数种子
		// srand(time(0));
		// //循环遍历给数组赋值
		// for(int i=0;i<len;i++)
		// {
		// 	array[i] = rand()%100;	
		// }
	//手动赋值
		for (int i = 0; i < len; i++) 
		{
        	printf("请输入第 %d 个元素的值：", i + 1);
        	scanf("%d", &array[i]);
    	}
	
}


//生成二维数组
void arr_setup_2D(int row,int col,int array[row][col]){
	//自动给二维数组赋值
		//设置随机数种子
		srand(time(0));
		//循环遍历给数组赋值
		for(int i=0;i<row;i++)
		{
			for(int j=0 ; j<col; j++){
				array[i][j] = rand()%100;	
			}
			
		}
	// //手动给二维数组赋值
	// 	for (int i = 0; i < row; i++)
	// 	{
 //        	for (int j = 0; j < col; j++) 
 //        	{
 //            	printf("请输入第 %d 行第 %d 列元素的值：", i + 1, j + 1);
 //            	scanf("%d", &arr[i][j]);
 //            }
 //        }
	
}


//翻转矩阵
void rotate(int row,int col,int array[row][col])
{
	int i,j;
	for(i = 0;i<row;i++)//从原矩阵的第一列开始，自下而上依次输出，实现顺时针翻转90°
	{
		for(j = 0 ;j<col;j++){
			array[col-j-1][i] = array[i][j];//
		}
	}
}







//遍历二位数组


struct array_2D_flag* search_arr_2D(int target,int row ,int col,int array[row][col])
{
	struct array_2D_flag* flags_arr;
	flags_arr = malloc(sizeof(struct array_2D_flag)*100);
	int k = 0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(array[i][j]==target){	
				flags_arr[k].row=i;
				flags_arr[k].col=j;
				k++;
			}
			else
			{
				printf("第%d行，第%d不是我想要找的元素，他的数值是%d\n",i,j,array[i][j]);
			}	

		}
	}
	flags_arr[k].row=1024;
	flags_arr[k].col=1024;
	return flags_arr;


}



//清理操作
void zero_arr(struct array_2D_flag* flags_arr,int row,int col,int array[row][col])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		if(flags_arr[i].row != 1024)
		{
			int a = flags_arr[i].row;
			int b = flags_arr[i].col;
			for(j=0;j<col;j++)
				array[a][j]=0;
			for(j=0;j<row;j++)
				array[j][b]=0;
		}
		else
		{
			break;
		}
	}
	printf("清0操作完成！\n");

}


//一维数组寻找中心索引
int center_index_array(int* array, int len)
{
    int i, totalarray = 0, leftarray = 0;
    for (i = 0; i < len; i++)
        totalarray += array[i] ;
    for (i = 0; i < len; i++)
    {
        if (leftarray * 2 + array[i] == totalarray)
            return i;
        leftarray += array[i];
    }
    return -1;
}




// 顺序查找法
int find_Seq(int *array, int len, int target){
	for (int i = 0; i < len; i++){
		if (array[i] == target){
			return i;
		}
	}
	return -1;
}


//二分查找
int binarySearch(int *array, int len, int target){
	int low = 0;
	int high = len - 1;
	int middle;
 
	while (low <= high){
		middle = (low + high) / 2;
		if (array[middle] < target){
			low = middle + 1;
		}else if (array[middle] > target){
			high = middle - 1;
		}else{
			printf("找到数值,位置为 %d \n", middle);
			return middle;
		 }
	}
	return -1;
 
}

//插值查找
int insertSearch(int *array, int len, int target)
{
    int low = 0, mid, high = len - 1;

    while (low <= high)
    {
        mid = low + (target - array[low]) / (array[high] - array[low]);
        if (target < array[mid])
        {
            high = mid - 1;//是mid-1，因为mid已经比较过了
        }
        else if (target > array[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
 

//往一个一维数组中顺序插入一个元素
 int insert_target(int* array,int len ,int target)
 {
 	for (int i = 0; i < len; i++)
 	{
 		if ((target > array[i])&&(target < array[i+1]))
 		{
 			for (int j = len -1; j > i; j--)
 			{
 				array[j+1] = array[j];	
 			}
 			array[i] = target;
 			return 0;
 		}
 		else if(target < array[0])
 		{
 			
 			for (int k = len-1; k > 0; k--)
 			{
 				array[k+1] = array[k];	
 			}
 			array[0] = target;
 			return 0; 
 		}
 		else if(target > array[len - 1])
 		{
 			array[len] = target;
 			return 0;
 		}

 	}
 	return -1;
 }

// struct section * merge_section(struct section* array,int len)
//  {
//  	int i;
//  	struct section *array2;
//  	array = (struct section *)malloc(sizeof(struct section)*3)
//  	for(i = 0;i<len;i++)
//  	{
//  		int flags_left,flags_right;
//  		flags_left = array[i].left;
//  		flags_right = array[i].right;
//  		for (int j = i+1; j < len; j++)
//  		{
//  			if(array[i].left<array[j].left<array[i].right)
//  			{

//  			}
//  			else if()
//  			{

//  			}
//  		}
 		
//  	}

//  	return array2;
//  }

//  int array_cmp_int(const void *_a,const void *_b){
//     int *a = *(int**)_a;
//     int *b = *(int**)_b;
//     return a[0] - b[0];
// } 
// int** merge(int** intervals, int intervalsSize, int* intervalsColSize, int* returnSize, int** returnColumnSizes){
//     if (intervalsSize == 1) {
//         *returnSize = 1;
//         return intervals;
//     }        
//     qsort(intervals,intervalsSize,sizeof(int*),array_cmp_int);
//     int** result = (int**)malloc(sizeof(int*) * intervalsSize);
//     for (int i = 0; i < intervalsSize; i++) {
//         result[i] = (int*)malloc(sizeof(int) * 2);
//     }
//     *returnSize = 0;
//     int temp[2] = {intervals[0][0],intervals[0][1]};
//     for (int i = 1; i < intervalsSize; i++) {
//         if (intervals[i][0] <= temp[1]) { //如果遍历到的为重叠的区间，进行合并        
//             temp[1] = fmax(temp[1],intervals[i][1]);
//         } 
//         else { //不重叠 
//             result[*returnSize][0] = temp[0];
//             result[*returnSize][1] = temp[1];
//             temp[0] = intervals[i][0];
//             temp[1] = intervals[i][1];
//             (*returnSize) += 1;  
//         }
//     }
//     result[*returnSize][0] = temp[0];
//     result[*returnSize][1] = temp[1];
//     *returnSize += 1;
//     *returnColumnSizes = (int*)malloc(sizeof(int)*(*returnSize));
//     for (int i = 0; i < *returnSize; i++){
//         (*returnColumnSizes)[i] = 2;
//     }
//     return result;
// }

//插入排序
void InsertSort(int* array, int len)
{
	for (int i = 0; i < len; i++)
	{
		//记录有序序列最后一个元素的下标
		int end = i;
		//待插入的元素
		int tem = array[end + 1];
		//单趟排
		while (end >= 0)
		{
			//比插入的数大就向后移
			if (tem < array[end])
			{
				array[end + 1] = array[end];
				end--;
			}
			//比插入的数小，跳出循环
			else
			{
				break;
			}
		}
		//tem放到比插入的数小的数的后面
		array[end  + 1] = tem;
		//代码执行到此位置有两种情况:
		//1.待插入元素找到应插入位置（break跳出循环到此）
		//2.待插入元素比当前有序序列中的所有元素都小（while循环结束后到此）
	}
}


 //区间排序用插入排序
void InsertSort_section(struct section* array, int len)
{
	for (int i = 0; i < len-1; i++)
	{
		//记录有序序列最后一个元素的下标
		int end = i;
		//待插入的元素
		int tem_left = array[end + 1].left;
		int tem_right = array[end + 1].right;
		//单趟排
		while (end >= 0)
		{
			//比插入的数大就向后移
			if (tem_left < array[end].left)
			{
				array[end + 1].left = array[end].left;
				array[end + 1].right = array[end].right;
				end--;
			}
			//比插入的数小，跳出循环
			else
			{
				break;
			}
		}
		//tem放到比插入的数小的数的后面
		array[end  + 1].left = tem_left;
		array[end  + 1].right = tem_right;

		//代码执行到此位置有两种情况:
		//1.待插入元素找到应插入位置（break跳出循环到此）
		//2.待插入元素比当前有序序列中的所有元素都小（while循环结束后到此）
	}
}

//合并区间
void merge_section(struct section * array,int len)
{
	for(int i = 0;i<len-1;i++)
	{
		if(array[i].left<array[i+1].left<array[i].right)
		{
			if(array[i+1].right<array[i].right)
			{
				array[i+1].right=-1;
				array[i+1].left=-1;
			}
			else if(array[i+1].right>array[i].right)
			{
				array[i].right=array[i+1].right;
				array[i+1].right=-1;
				array[i+1].left=-1;
			}

		}
		else
		{
			printf("正确排序区间\n");
		}
	}
}



//希尔排序
void ShellSort(int* array, int len)
{
	int gap = len;
	while (gap>1)
	{
		//每次对gap折半操作
		gap = gap / 2;
		//单趟排序
		for (int i = 0; i < len - gap; i++)
		{
			int end = i;
			int tem = array[end + gap];
			while (end >= 0)
			{
				if (tem < array[end])//利用了插入排序的思想
				{
					array[end + gap] = array[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			array[end + gap] = tem;
		}
	}
}


//优化选择排序
void SelectSort(int* array, int len)
{
	int begin = 0;
	int end = len - 1;
	while (begin < end)
	{
		int mini = begin, maxi = begin;
		for (int i = begin + 1; i <= end; i++)
		{
			if (array[i] < array[mini])
			{
				mini = i;
			}
			if (array[i] > array[maxi])
			{
				maxi = i;
			}
		}
		swap(&array[mini], &array[begin]);
		//如果maxi = begin，上一步交换了begin和mini的值，会影响maxi指向的值
		if (maxi == begin)
		{
			maxi = mini;
		}
		swap(&array[maxi], &array[end]);//将效率加快一倍
		begin++;
		end--;
	}
}
//交换函数
void swap(int* a, int* b)
{
	int tem = *a;
	*a = *b;
	*b = tem;
}


//冒泡排序
void BubbleSort(int* array, int len)
{
	int end = len;
	while (end)
	{
		int flag = 0;
		for (int i = 1; i < end; ++i)
		{
			if (array[i - 1] > array[i])
			{
				int tem = array[i];
				array[i] = array[i - 1];
				array[i - 1] = tem;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
		--end;
	}
}

//最长公共前缀
char * longestCommonPrefix(char ** strs, int strsSize)
{
    if(strsSize==0){
        return "";
    }
    int pre;
    char *prefix; 
    printf("%ld\n",strlen(strs[0]));
    printf("%s\n", strs[0]);
    printf("%c\n", strs[0][1]);
    for(int i=0;i<strlen(strs[0]);i++){
        for(int j=1;j<strsSize;j++){
            if(strs[0][i]!=strs[j][i]){
                // strs[0][i]='\0';//不能被修改，否则引起CORE DUMPED 
                // return strs[0];
                pre = i;
                printf("%d\n", i);
                goto exit;
        	}
    	}
	}

    exit:
    prefix = (char*)malloc(sizeof(char) * (pre + 1)); // 动态分配内存空间
    strncpy(prefix, strs[0], pre); // 将最长公共前缀拷贝到动态分配的内存空间
    prefix[pre] = '\0'; // 在最长公共前缀的结尾添加空字符
    return prefix;
}

//最长回文子串（动态规划解决）
char * longestPalindrome(char * s){//”abdab“
    //回文串结束下标
    int j;
    //最长回文串长度
    int maxLength = 1;
    //回文串起始位置
    int begin = 0;
    int len = strlen(s);
    // dp[i][j] 表示 s[i..j] 是否是回文串
    bool dp[len][len];

    //0.初始化：所有长度为 1 的子串都是回文串 
    for (int i = 0; i < len; i++) { 
        dp[i][i] = true; 
    }

    //1.长度为 1 的一定是回文串，故长度从 2 开始
    for(int l = 2; l <= len; l++){
        //2.起始位置从 0 开始
        for(int i = 0; i < len; i++){
            ///结束位置
            j = i + l - 1;

            //3.注意数组越界，注意 等于
            if (j >= len) {
                break;
            }

            //回文串首尾字母不相同
            if (s[i] != s[j]) {
                dp[i][j] = false;
            } else {
                //回文串小于 3 个字符（ 3 个字符内首尾相等即为回文串）
                if (j - i < 3) {
                    dp[i][j] = true;
                } else {
                    //回文串大于两个字符
                    dp[i][j] = dp[i + 1][j - 1];//dp[1][4]=dp[2][3]动态规划和转移，前者的数值由后者决定
                }
            }

            //4.只要 dp[i][L] == true 成立，就表示子串 s[i:L] 是回文，此时记录回文 长度 和 起始位置
            if (dp[i][j] && l > maxLength) {
                maxLength = l;
                begin = i;
            }
        }
    }
    //设置结束位置
    s[begin + maxLength] = '\0';
    return s + begin;//防止第前面的元素不是回文子串的一部分
}


//递归的方式
char * reverse_string(char* arr)
{
	int len = strlen(arr);
	char tmp = *arr;
	*arr = *(arr+len-1);
 
	*(arr+len-1) = '\0';
	if(strlen(arr+1)>=2)
		reverse_string(arr+1);
 
	*(arr+len-1) = tmp;
	return arr;
}


// 翻转单词(没解决)

char * reverse_word(char* arr)
{

	int len = strlen(arr);
	char *arr1;
	arr1 = (char *)malloc(sizeof(char)*len);
	arr1 = "aaa bbb cc dddd ";
	int j = len;
	int k,i,h;
	printf("%s\n", arr);
	printf("%c\n", arr[0]);
	printf("%c\n", arr[len]);
		printf("%s\n", arr1);
	printf("%c\n", arr1[0]);
	printf("%c\n", arr1[len]);
	h =0;

	for(i=0;i<len - 1 ;i++)
	{
		
		if(isspace(arr[i]))
		{
			printf("使用reverse_string\n");
			arr1 = reverse_string(arr1);

		} 
	}
	return arr1;

}




//给你两个字符串 haystack 和 needle ，请你在 haystack 字符串中找出 needle 字符串的第一个匹配项的下标（下标从 0 开始）。
int strstr1(char ** str_array,int len)
{
	int j =0;
	printf("%c\n",str_array[0][1]);
	printf("%c\n",str_array[1][0]);
	printf("%s\n",str_array[1]);

	if(str_array[1][0]=='\0')
	{
		return -1;
	}
	printf("%s\n",str_array[0]);
	for(int i =0 ;i<strlen(str_array[0]);i++)
	{
		// for(int j =0 ;j<strlen(str_array[1]);j++)
		// {
			

			if(str_array[1][j] == str_array[0][i])
			{
				j++;
				if(str_array[1][j]=='\0')
					break;
			}

		// }
	}
	return j;

}

// typedef struct SListNode
// {
//  SLTDateType data;
//  struct SListNode* next;
// }SListNode;

// 动态申请一个节点
SListNode* BuySListNode(SLTDateType x)
{
	SListNode * tmp;
	tmp = (SListNode *)malloc(sizeof(SListNode));
	if(tmp == NULL)
	{
		printf("无法开辟出空间节点，说明内存中的堆已经溢出了\n");
		return NULL;
	}
	else
	{
		tmp->data = x;
		tmp->next = NULL;
		return tmp;
	}
}

// 单链表打印
void SListPrint(SListNode* plist)
{
	SListNode *head = plist;//一定要用中间变量，否则改变了原来指针的数值
	while(head != NULL)
	{
		printf("%d\n",head->data);
		head = head->next;
	}
}

// 单链表尾插
void SListPushBack(SListNode* pplist, SLTDateType x)
{
	SListNode *newnode =BuySListNode(x);

	if(pplist == NULL)
	{
		pplist = newnode;
	}
	else
	{

		SListNode *tail = pplist;//一定要用中间变量，否则改变了原来指针的数值
		while(tail->next != NULL)
			tail = tail->next;
		tail->next = newnode;
	}
}

// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	SListNode* newnode = BuySListNode(x);
	if(*pplist == NULL)
	{
		*pplist = newnode;
	}
	else
	{
		newnode->next = *pplist;
		*pplist = newnode;
	}

}

// 单链表的尾删
void SListPopBack(SListNode** pplist)
{
	assert(*pplist);
	SListNode* cur = *pplist;
	SListNode* prev = NULL;
	if(cur->next == NULL)
	{
		free(cur);
	}
	else
	{
		while(cur->next != NULL)
		{
			prev = cur;
			cur = cur->next;
		}
		free(cur);
		prev->next = NULL;
	}
}

// 单链表头删
void SListPopFront(SListNode** pplist)
{
	assert( *pplist);
	SListNode* cur = *pplist;
	if((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		cur = cur->next;
		free(*pplist);
		*pplist = cur; 
	}

}


// 单链表查找
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	assert(plist);
	while (plist != NULL)
	{
		if (plist->data == x)
		{
			return plist;
		}
		plist = plist->next;
	}
	return NULL;
}

// 单链表在pos位置之后插入x
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	SListNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}


// 单链表删除pos位置之后的值
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	if (pos->next == NULL)
	{
		printf("后面无数据\n");
		return;
	}
	else
	{
		SListNode* prev = pos;
		SListNode* cur = pos->next;
		prev->next = cur->next;
		free(cur);
		cur = NULL;
	}
 
}


//初始化双向链表
ListNode* ListInit(ListNode* phead)
{
	phead = BuyList(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

//双向链表打印
void ListPrint(ListNode* phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
 
}

// 创建返回链表的头结点
ListNode* BuyList(ListDateType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (newnode == NULL)
	{
		printf("BuyList fail\n");
		exit(-1);
	}
	newnode->val = x;
	newnode->next = NULL;
	newnode->prev = NULL;
    return newnode;
}

//双向链表尾插
void ListPushBack(ListNode* phead, ListDateType x)
{
	assert(phead);//
	ListNode* newnode = BuyList(x);
	ListNode* tail = phead->prev;
 
	tail->next = newnode;
	phead->prev = newnode;
	newnode->next = phead;
	newnode->prev = tail;
}

//双向链表尾删
void ListPopBack(ListNode* phead)
{
	assert(phead->next != phead);
	ListNode* tail = phead->prev;
	ListNode* prev = tail->prev;
	phead->prev = prev;
	prev->next = phead;
	free(tail);
	tail = NULL;
}

//双向链表头插
void ListPushFront(ListNode* phead, ListDateType x)
{
	assert(phead);
	ListNode* newnode = BuyList(x);
	ListNode* head = phead->next;
 
	phead->next = newnode;
	head->prev = newnode;
	newnode->next = head;
	newnode->prev = phead;
}

//双向链表头删
void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
 
	ListNode* head = phead->next;
	ListNode* next = head->next;
 
	phead->next = next;
	next->prev = phead;
	free(head);
	head = NULL;
}

//双向链表查找
ListNode* ListFind(ListNode* phead, ListDateType x)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* pos = phead->next;
	while (pos != phead)
	{
		if (pos->val == x)
		{
			return pos;
		}
		pos = pos->next;
	}
	return NULL;
}

//在pos之前插入
void ListInsert(ListNode* pos, ListDateType x)
{
	assert(pos);
	ListNode* newnode = BuyList(x);
	ListNode* prev = pos->prev;
 
	prev->next = newnode;
	pos->prev = newnode;
	newnode->prev = prev;
	newnode->next = pos;
}

//删除pos位置
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* prev = pos->prev;
	ListNode* next = pos->next;
	prev->next = next;
	next->prev = prev;
	free(pos);
	pos = NULL;
}


//栈的初始化(操作受限的线性表)
void StackInit(SequenceStack *S)
{
	S->top = -1; //让栈顶指针移动至-1位(最底)
}


//判断此时栈是否为空
bool JudgeStackEmpty(SequenceStack *S) //为空返回true，非空返回false
{
	if(S->top == -1)  // 判断此时栈顶指针是否和栈底指针是否重合(栈底默认为-1)
		return true;
	else
		return false;
}

//进栈操作
void StackPush(SequenceStack *S,int x)
{
	if(S->top == MaxStackSize - 1){  
		printf("此时栈满");  //若栈满继续入栈会出现上溢问题
	}
	else{
		S->top++;  //栈顶指针往上移动一格
		S->stack[S->top] = x;   //将元素x存放在栈顶指针所指单元中
		printf("入栈成功");
	}
}

//出栈操作（删除栈顶元素，用变量x返回）
int StackPop(SequenceStack *S)
{
	if(S->top == -1){
		printf("此时为空栈，无法继续出栈"); //若栈空仍继续出栈，会出现下溢问题
		return -1;//-1表示出栈失败
	}
	int x = S->stack[S->top]; 
	S->top--; //栈顶指针下移，表示出栈了一个元素
	return x;
}


//取栈顶元素
int GetStackTop(SequenceStack *S)
{
	if(S->top == -1)  //判断此时是否为空
		return -1; //-1表示此时无法取栈顶元素（可以根据题目要求进行调整)
	int x = S->stack[S->top]; //类似于出栈存x的操作，但无需动栈顶指针
	return x;
}





void QueueInti(Queue* pq)
{
	assert(pq); //防止pq为空指针
	pq->head = pq->tail = NULL;
}

void QueueDestory(Queue* pq)
{
	assert(pq); //防止pq为空指针
	QueueNode* cur = pq->head;
	while (cur)
	{
		QueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	pq->tail = pq->head = NULL;
}

void QueuePush(Queue* pq, QDateType x)
{
	assert(pq); //防止pq为空指针

	QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
	if (NULL == newNode)
	{
		printf("malloc error\n");
		exit(-1);
	}
	newNode->val = x;
	newNode->next = NULL;//开辟一个新节点存储数据

	if (pq->tail == NULL)//判断是否为空队列
	{
		assert(pq->head == NULL);
		pq->head = pq->tail = newNode;
	}
	else
	{
		pq->tail->next = newNode;
		pq->tail = newNode;
	}
}

void QueuePop(Queue* pq)
{
	assert(pq);//防止pq为空指针
	assert(pq->head && pq->tail); //防止队列为空队列
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QueueNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
}

QDateType QueueFront(Queue* pq)
{
	assert(pq);//防止pq为空指针
	assert(pq->head && pq->tail); //防止队列为空队列

	return pq->head->val;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);

	return pq->head == NULL;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	QueueNode* cur = pq->head;
	int count = 0;
	while (cur)
	{
		cur = cur->next;
		count++;
	}
	return count;
}
