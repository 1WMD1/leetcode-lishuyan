
#ifndef TEST__H
#define TEST__H
#define COUNT 100

/*===============================================================================0、通用函数===============================================================================*/
//数组相关
void arr_setup_1D(int n,int* array);
void arr_setup_2D(int row,int col,int array[row][col]);
struct array_2D_flag* search_arr_2D(int flags,int row ,int col,int array[row][col]);//遍历二位数组，找到某个数值，并返回给主函数



/*===============================================================================1、翻转矩阵===============================================================================*/
void rotate(int row,int col,int array[row][col]);



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

#endif
