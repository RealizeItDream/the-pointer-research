#include<stdio.h>
#include<string.h>

char *my_strcat(char *dest,char *str)
{
    while(*dest!='\0')
        dest++;
    while(*str!='\0')
    *dest++=*str++;
    *dest='\0';
    return dest;
    }   

void main()
{
    char str1[10]="abcd";
    char *str2;
    str2="efgh";
    my_strcat(str1,str2);
    printf("str1=%s\n",str1);
}
