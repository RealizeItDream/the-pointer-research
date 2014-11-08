#include<stdio.h>
#include<string.h>

int my_strcmp(char *str1, const char *str2)
{
	while(*str1 == *str2)
	{
		if(*str1== '\0')
		    return 0;
		*str1++;
		*str2++;
	}
	return *str1-*str2;
}

void main()
{
  char *cp="abcdef";
	char *ch="abddef";
	printf("%d\n",my_strcmp(cp,ch));
}
