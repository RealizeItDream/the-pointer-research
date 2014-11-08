#include<stdio.h>
#include<string.h>

char *reverse(char *str)   
{     
    int len = strlen(str);   
    if(len > 1)   
    {   
        char ctemp =str[0];   
        str[0] = str[len-1];      
        str[len-1] = '\0';
        reverse(str+1);   // 每调用一次，字符串分别从两边各减少一个   
        str[len-1] = ctemp;   
    }   
    return str;   
}
void main()
{
    char str1[]="abcdef";
    reverse(str1);
    printf("%s\n",str1);
}
