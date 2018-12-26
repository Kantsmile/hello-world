/*PAT B1009*/
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char str[85];
	gets(str);
	int len = strlen(str),row = 0,column = 0;
	char ans[85][85];
	for(int i = 0;i < len;i++)
	{
		if(str[i]!=' ')
		{
			ans[row][column++] = str[i];
		}
		else
		{
			ans[row++][column] = '\0';
			column = 0;
		}
	}
	for(int i = row;i >= 0;i--)
	{
		printf("%s",ans[i]);
		if(i)printf(" ");
		else printf("\n");
	}
	return 0;
}
