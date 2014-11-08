#include<stdio.h>
#include<string.h>

char * my_strcpy(char *dest, const char * src)
{
	char *ret = dest;
	while((*dest++ = *src++));
	return dest;
}

void main()
{
    char *cp="abcdef";
	char ch[10];
    my_strcpy(ch,cp);
	printf("ch=%s\n",ch);
}
