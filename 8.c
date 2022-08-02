#include <stdio.h>
#include <string.h>
int main()
{
	int i;
char s1[100];
char s2[100];
char s3[100];
scanf("%s",s1);
for (i=0;s1[i]!='\0';i++)
{
 s2[i] = s1[i];
}
s2[i]='\0';
strcpy(s3,s1);
printf("copied string = %s",s2);
printf("\n copied string with string function = %s",s3);
	return 0;
}
