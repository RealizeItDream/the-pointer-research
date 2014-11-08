#include<stdio.h>
#include<string.h>

int my_strlen(char *str)
{
  char *ch = str;
	while(*ch != '\0' )
		ch++;
	return ch-str;
 
}

void main()
{
	char *cp="abcdef";
	printf("len=%d\n",my_strlen(cp));
}
