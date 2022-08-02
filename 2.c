#include <stdio.h>
#include <string.h>

int main()
{
	char str[6];
	for(int i=0;i<5;i++)
	{
		str[i]=getchar();
	}
	printf("%s",str);
	return 0;
}
