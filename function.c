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