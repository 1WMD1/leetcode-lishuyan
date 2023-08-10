#include <>
#include <>

void mergeAlternately(){
	//定义两一维字符数组
	char str1[] = "adc";
	char str2[] = "defg";

	//合并
	int str1_1en = strlen(str1);
	int str2_len = strlen(str2);
	char* str3;
    str3 = (char *)malloc(sizeof(char) * (str1_len + str2_len));
    int j = 0;
    int str_max = (str1_len > str2_len) ? str1_len : str2_len;

	for(int i = 0; i < str_max ;i++)
	{

		str3[j] = str1[i];
		j++;
		str3[j] = str2[i]; 

	}

	//循环打印一位字符数组
	print_char_array_1D(str3);



}