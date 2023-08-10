#include <stdio.h>
#include <stdlib.h>
#include "./01_mergeAlternately.h"
#include <string.h>
#include <stdbool.h>


char * mergeAlternately(char * word1, char * word2){
	//定义两一维字符数组

	//合并
	int word1_len = strlen(word1);
	int word2_len = strlen(word2);
	char* str3;
  str3 = (char *)malloc(sizeof(char) * 1000);
  int j = 0;
  int str_max = (word1_len > word2_len) ? word1_len : word2_len;
  str3[word1_len + word2_len] = '\0';
	for(int i = 0; i < str_max ;i++)
	{
		if((i+1) <= word1_len)
		{
			str3[j++] = word1[i];
		}

	  if((i+1) <= word2_len)
		{
		  str3[j++] = word2[i]; 
		}
	}
 return str3;
}