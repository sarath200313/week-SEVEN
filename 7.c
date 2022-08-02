#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	scanf("%s",s);
	int x;
	for(int i=0;s[i]!='\0';i++){
		x++;
		}
	int y=strlen(s);
	printf("%d %d",x,y);
	return 0;
}
