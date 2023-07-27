
#ifndef TEST__H
#define TEST__H
#define COUNT 100

/*===============================================================================0、通用函数===============================================================================*/
//数组相关
void arr_setup_1D(int n,int* array);//生成一维数组
int insert_target(int* array,int len ,int target);//在一维数组中插入一个元素

void arr_setup_2D(int row,int col,int array[row][col]);//生成二维数组
struct array_2D_flag* search_arr_2D(int flags,int row ,int col,int array[row][col]);//遍历二位数组，找到（顺序查找）某个数值，并返回给主函数


//查找
int find_Seq(int *array, int len, int target);//顺序查找
int binarySearch(int *array, int len, int target);//二分法查找，前提数组或者其他数据结构是顺序的
int insertSearch(int *array, int len, int target);//插值查找，依旧是顺序查找，但是效率要比二分法快些，提供了自适应算法
//斐波那契查找（预留）



//排序
void InsertSort(int* array, int len);// 插入排序
void ShellSort(int* array, int len);// 希尔排序
void swap(int* a, int* b);//交换函数
void SelectSort(int* array, int len);// 选择排序
void BubbleSort(int* array, int len);// 冒泡排序

//链表（虾米那两种最常用的链表，其他不怎么用）
//无头节点单向非循环链表：在链表中作为其他数据结构的子结构

// 1、无头+单向+非循环链表增删查改实现
typedef int SLTDateType;
typedef struct SListNode
{
 SLTDateType data;
 struct SListNode* next;
}SListNode;
 
// 动态申请一个节点
SListNode* BuySListNode(SLTDateType x);
// 单链表打印
void SListPrint(SListNode* plist);
// 单链表尾插
void SListPushBack(SListNode* pplist, SLTDateType x);
// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDateType x);
// 单链表的尾删
void SListPopBack(SListNode** pplist);
// 单链表头删
void SListPopFront(SListNode** pplist);
// 单链表查找
SListNode* SListFind(SListNode* plist, SLTDateType x);
// 单链表在pos位置之后插入x
void SListInsertAfter(SListNode* pos, SLTDateType x);
// 单链表删除pos位置之后的值
void SListEraseAfter(SListNode* pos);


//带头节点双向循环链表：一般单独存储数据。在内核中常见到；
// 2、带头+双向+循环链表增删查改实现
typedef int ListDateType;
typedef struct ListNode 
{
	ListDateType val;
	struct ListNode* prev;
	struct ListNode* next;
}ListNode;	
 
//初始化双向链表
ListNode* ListInit(ListNode* phead);
//双向链表打印
void ListPrint(ListNode* phead);
// 创建返回链表的头结点.
ListNode* BuyList(ListDateType x);
//双向链表尾插
void ListPushBack(ListNode* phead,ListDateType x);
//双向链表尾删
void ListPopBack(ListNode* phead);
//双向链表头插
void ListPushFront(ListNode* phead, ListDateType x);
//双向链表头删
void ListPopFront(ListNode* phead);
//双向链表查找
ListNode* ListFind(ListNode* pHead, ListDateType x);
//在pos之前插入
void ListInsert(ListNode* pos, ListDateType x);
//删除pos位置
void ListErase(ListNode* pos);



/*===============================================================================1、翻转矩阵===============================================================================*/
void rotate(int row,int col,int array[row][col]);//翻转矩阵



/*===============================================================================2、零矩阵===============================================================================*/
//零矩阵中的数据结构
struct array_2D_flag{
		int row;
		int col;
	};
struct array_2D_flag* search_arr_2D(int flags,int row ,int col,int array[row][col]);//遍历二位数组，找到某个数值，并返回给主函数
void zero_arr(struct array_2D_flag* flags_arr,int row,int col,int array[row][col]);//零矩阵清0操作

/*===============================================================================3、寻找数组的中心索引===============================================================================*/
int center_index_array(int* array, int n);//一维数组寻找中心索引

/*===============================================================================5、合并区间===============================================================================*/
struct section
	{
		int left;
		int right;
	};
void InsertSort_section(struct section* array, int len);//区间插入排序
void merge_section(struct section * array,int len);//合并区间


/*===============================================================================6、最长公共前缀===============================================================================*/
char * longestCommonPrefix(char ** strs, int strsSize);


/*===============================================================================7、最长回文子串===============================================================================*/
char * longestPalindrome(char * s);//（动态规划思想解决）


/*===============================================================================8、翻转字符串里的单词===============================================================================*/
char * reverse_word(char* arr);

/*===============================================================================9、实现 strStr()===============================================================================*/
int strstr1(char ** str_array,int len);

/*===============================================================================10、实现 反转字符串===============================================================================*/
char * reverse_string(char* arr);//采用递归思想

#endif
