#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"




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
		for (int i = 0; i < len - gap; ++i)
		{
			int end = i;
			int tem = array[end + gap];
			while (end >= 0)
			{
				if (tem < array[end])
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
