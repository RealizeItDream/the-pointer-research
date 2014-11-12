/*
   function:Checks if a string is a palindrome string
   author:  Liu Xiangyu
   data:    2014/11/11
*/
#include<stdio.h>
#include <string.h>  

int main()
{
	int i,j;
	char *str="abdcba";
	int len=strlen(str);
    for(i=0,j=len-1;(&str[i])<(&str[j]);i++,j--)
	{
	
		if(str[i] != str[j])
		{
			printf("此字符串不是回文字符串。\n");
			return 0;
		}
	}   
	printf("此字符串是回文字符串。\n");
	return 0;
}

