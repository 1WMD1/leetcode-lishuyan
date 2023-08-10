#ifndef ARRAY_H
#define ARRAY_H

#define CONFIG_ARRAY 
//一维整形
void arr_setup_1D(int n,int* array);//生成一维整形数组
int insert_target(int* array,int len ,int target);//在一维整形数组中插入一个元素


//一维字符型
void print_char_array_1D(char * str3)//打印一维的字符数组


//二维整形
void arr_setup_2D(int row,int col,int array[row][col]);//生成二维数组
struct array_2D_flag* search_arr_2D(int flags,int row ,int col,int array[row][col]);//遍历二位数组，找到（顺序查找）某个数值，并返回给主函数


//二维字符型




#endif
