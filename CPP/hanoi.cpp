#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
long long int count=0LL;
void move(int n,char moveFrom,char moveTo,char swap)
{
	if(n==1)
		{
			// printf("%c->%c\t",moveFrom,moveTo);
			count++;
			return;
		}
	move(n-1,moveFrom,swap,moveTo);
	move(1,moveFrom,moveTo,swap);
	move(n-1,swap,moveTo,moveFrom);
}
int main()
{
	int n=0;
	double duration=0.0;
	clock_t start,end;
	printf("Input you number,don't be to great!\n");
	label1:scanf("%d",&n);
	if(n<1||n>32)
	{
		printf("Invalid input,try again!\n");
		goto label1;
	}
	start=clock();
	move(n,'A','B','C');
	printf("\n");
	end=clock();
	duration=(double)(end-start)/CLOCKS_PER_SEC;
	printf("Totally %f seconds used.\n",duration);
	printf("Totally %lld steps used.\n",count);
	return 0;
}