
#ifndef TEST__H
#define TEST__H
#define COUNT 100

void arr_setup_1D(int n,int* array);
void arr_setup_2D(int row,int col,int array[row][col]);
void rotate(int row,int col,int array[row][col]);


struct array_2D_flag{
		int row;
		int col;
	};
struct array_2D_flag* search_arr_2D(int flags,int row ,int col,int array[row][col]);
void zero_arr(struct array_2D_flag* flags_arr,int row,int col,int array[row][col]);

#endif
