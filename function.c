#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"




//生成一个数组
void arr_setup_1D(int n,int* array){

	//自动赋值
		// //设置随机数种子
		// srand(time(0));
		// //循环遍历给数组赋值
		// for(int i=0;i<n;i++)
		// {
		// 	array[i] = rand()%100;	
		// }
	//手动赋值
		for (int i = 0; i < n; i++) 
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


struct array_2D_flag* search_arr_2D(int flags,int row ,int col,int array[row][col])
{
	struct array_2D_flag* flags_arr;
	flags_arr = malloc(sizeof(struct array_2D_flag)*100);
	int k = 0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(array[i][j]==flags){	
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
int center_index_array(int* array, int n)
{
    int i, totalarray = 0, leftarray = 0;
    for (i = 0; i < n; i++)
        totalarray += array[i] ;
    for (i = 0; i < n; i++)
    {
        if (leftarray * 2 + array[i] == totalarray)
            return i;
        leftarray += array[i];
    }
    return -1;
}