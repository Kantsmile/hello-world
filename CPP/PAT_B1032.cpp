/*PAT B1032*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int school[100010] = {0};
	for(int i = 1;i <= n;i++)
	{
		int schID,score;
		scanf("%d%d",&schID,&score);
		school[schID] += score;
	}
	int MAX = -1,k=1;
	for(int i = 1;i <= n;i++)
	{
		if(school[i]>MAX)
		{
			MAX = school[i];
			k = i;
		}
	}
	printf("%d %d\n",k,MAX);
	return 0;
}
