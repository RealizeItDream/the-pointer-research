#include<stdio.h>
#include<string.h>
#include<assert.h>

char * my_strcpy(char *dest, const char * src)
{
	char *ret = dest;
	assert((dest != NULL) && (src != NULL));      //用来进行判空
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
