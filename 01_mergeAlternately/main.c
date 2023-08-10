#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "./01_mergeAlternately.h"

int main()
{
	char word1[]= "str\0";
	char word2[]= "abcd\0";
	char * new_arr;
	new_arr = mergeAlternately(word1, word2);
 	
 	for(int i =0 ;i< sizeof(new_arr);i++)
 	{
 		printf("%c\n", new_arr[i]);
 	}

	return 0;
}