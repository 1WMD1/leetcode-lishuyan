#inlude "../"

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

//打印一维的字符数组
void print_char_array_1D(char * str3)
	{
		for(int i = 0; i<strlen(str3) ; i++)
		{
			printf("第%d个元素的数值是%d\n",i,str3[i]);
		}

	}