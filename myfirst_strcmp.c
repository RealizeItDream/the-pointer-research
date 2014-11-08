#include<stdio.h>
#include<string.h>

int my_strcmp(char *str1, const char *str2)
{
	int i;
	for(i=0; str1[i]==str2[i]; i++)
	{
		if(str1[i]=='\0')
			return 0;
	}
	return str1[i]-str2[i];
}

void main()
{
    char *cp="abcdef";
	char *ch="abddef";
	printf("%d\n",my_strcmp(cp,ch));
}
