#include <cstdio>
#include <cmath>
int n,count=0,*P,*hash;
bool judge()
{
	for(int i=1;i<n+1;i++)
	{
		for(int j=i+1;j<n+1;j++)
		{
			if(std::abs(i-j)==std::abs(P[i]-P[j]))
				return false;
		}
	}
	return true;
}
void queenprint()
{
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<n+1;j++)
		{
			if(j==P[i])
				printf("1 ");
			else printf("0 ");
		}
		printf("\n");
	}
}
void gp(int index)
{
	if(index==n+1)
	{
		if(judge())
		{
			queenprint();
			printf("\n");
			count++;
		}
		return;
	}
	for(int i=1;i<n+1;i++)
	{
		if(hash[i]==false)
		{
			P[index]=i;
			hash[i]=true;
			gp(index+1);
			hash[i]=false;
		}
	}
}
int main()
{
	scanf("%d",&n);
	P=new int [n+1];
	for(int i = 0; i < n+1; i++)
		P[i] = 0;
	hash=new int [n+1];
	for(int i = 0; i < n+1; i++)
		hash[i] = false;
	gp(1);
	printf("Suitable results:%d.\n",count);
	delete []P;
	delete []hash;
	return 0;
}