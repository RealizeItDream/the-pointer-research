#include<stdio.h>
#include<string.h>

char *my_strcpy(char *dest,char *src)
{
    int i = 0;
	while(src[i] != '\0')
	{
		dest[i]=src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
void main()
{
	char *cp="abcdef";
	char ch[10];
    my_strcpy(ch,cp);
	printf("ch=%s\n",ch);
}
