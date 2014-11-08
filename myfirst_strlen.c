#include<stdio.h>
#include<string.h>

int my_strlen(char *str)
{
	int len=0;
	while(*str++ != '\0')
		len ++;
	return len;
}

void main()
{
	char *cp="abcdef";
	printf("len=%d\n",my_strlen(cp));
}
