/*PAT B1036*/
#include <stdio.h>
int main()
{
	int N,line;
	char C;
	scanf("%d %c",&N,&C);
	if(N%2)line=(N+1)/2;
	else line = N/2;
	for(int i = 0;i < N;i++)printf("%c",C);
	printf("\n");
	for(int i = 0;i < line-2;i++)
	{
		printf("%c",C);
		for(int j = 0;j < N-2;j++)printf(" ");
		printf("%c\n",C);
	}
	for(int i = 0;i < N;i++)printf("%c",C);
	printf("\n");
	return 0;
}
