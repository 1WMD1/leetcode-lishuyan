#include <stdio.h>
#include "./05_findDifference.h"
#include <stdlib.h>


/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
/**

 * Return an array of arrays of size *returnSize.

 * The sizes of the arrays are returned as *returnColumnSizes array.

 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().

 */

int** findDifference(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize, int** returnColumnSizes)

{   

    //根据数值范围创建一个两千的数组，用于跳过负数

    int hash[2001]={0};

    //记录在nums1中出现的数值

    for(int i=0; i<nums1Size; ++i)
	{ 
        hash[nums1[i]+1000]=1; 
    }



    //记录在nums2中出现的数值

    for(int i=0; i<nums2Size; ++i)

    {   

        int index=nums2[i]+1000;

        //第一个表达式判断数值是否在nums2中出现过，表达式二跳过在nums2中重复出现的数值

        if(hash[index] != 0 && hash[index] != 2)

            { hash[index]=-1; }

        else if(hash[index] == 0)

            { hash[index]=2; }

    }

    //创建结果数组

    int **res=(int **)malloc(sizeof(int *)*(2));

    res[0]=(int *)malloc(sizeof(int)*(nums1Size));

    res[1]=(int *)malloc(sizeof(int)*(nums2Size));

    *returnSize=2;



    (*returnColumnSizes)=(int *)malloc(sizeof(int)*(2));

    

    //记录子数组一的长度

    int len=0;  

    for(int i=0; i<nums1Size; ++i)

    {

        int index=nums1[i]+1000;

        //跳过重复数值

        if(hash[index] != 0 && hash[index] != -1)

        {

            res[0][len++]=nums1[i];

            hash[nums1[i]+1000]=0;

        }

    }

    (*returnColumnSizes)[0]=len;



    len=0;

    for(int i=0; i<nums2Size; ++i)

    {

        int index=nums2[i]+1000;

        if(hash[index] != 0 && hash[index] != -1)

        {

            res[1][len++]=nums2[i];

            hash[nums2[i]+1000]=0;

        }

    }

    (*returnColumnSizes)[1]=len;



    //返回

    return res;

}
