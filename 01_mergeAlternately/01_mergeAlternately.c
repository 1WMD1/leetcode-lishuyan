#include <studio.h>
#include <stdlib.h>





void mergeAlternately(){
	//定义两一维字符数组
	char str1[] = "adc\0";
	char str2[] = "defg\0";

	//合并
	int str1_len = strlen(str1);
	int str2_len = strlen(str2);
	char* str3;
  	str3 = (char *)malloc(sizeof(char) * 1000);
  	int j = 0;
 	 int str_max = (str1_len > str2_len) ? str1_len : str2_len;
  	str3[str1_len + str2_len] = '\0';
	for(int i = 0; i < str_max ;i++)
	{
		if((i+1) <= str1_len)
		{
			str3[j++] = str1[i];
		}

	  if((i+1) <= str2_len)
		{
		  str3[j++] = str2[i]; 
		}
	}
 	return str3;
	//循环打印一位字符数组
   	print_char_array_1D(str3);

}
