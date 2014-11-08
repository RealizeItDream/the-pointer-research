#include<stdio.h>
#include<string.h>

int my_strlen(char *str)
{
	if(*str == '\0')
	    return 0;
	else
		return(1+my_strlen(++str)); 
}

void main()
{
	char *cp="abcdef";
	printf("len=%d\n",my_strlen(cp));
}
