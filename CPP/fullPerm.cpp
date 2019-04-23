#include <cstdio>
int n,*P,*hash;
void gp(int present)
{
	if(present==n+1)
	{
		for(int i=1;i<n+1;i++)
			printf("%d ",P[i]);
		printf("\n");
	}
	for(int x=1;x<n+1;x++)
	{
		if(hash[x]==false)
		{
			P[present]=x;
			hash[x]=true;
			gp(present+1);
			hash[x]=false;
		}
	}
}
int main(int argc, char const *argv[])
{
	scanf("%d",&n);
	P=new int[n+1];
	hash=new int[n+1];
	for(int i=0;i<=n;i++)
		hash[i]=false;
	gp(1);
	return 0;
}