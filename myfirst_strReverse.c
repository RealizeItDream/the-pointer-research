#include<stdio.h>
#include<string.h>

char *reverse_string(char *string)
{
   int n=0,i,j;
   char temp;
   char *str1=string;
   while(*str1++!='\0')
         n++;
   for(i=0,j=n-1;i<j;i++,j--)
      {
		   temp=string[i];
		   string[i]=string[j];
		   string[j]=temp;
      }
   return string;
}

void main()
{
    char str1[]="abcdef";
    reverse_string(str1);
    printf("%s\n",str1);
}
