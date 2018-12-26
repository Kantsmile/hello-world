/*插入排序*/
#include <stdio.h>
#include <ctime>
#include <algorithm>
void sortting(int n,int *p)
{
	for(int i = 1;i < n;i++)
	{
		for(int j = 0;j < i;j++)
		{
			if(p[i]<p[j])
			{
				int temp = p[i];
				for(int k = i;k > j;k--)p[k]=p[k-1];
				p[j] = temp;
			}
		}
	}
}
int main()
{
	printf("How many numbers to be sorted?\n");
	int n;
	scanf("%d",&n);
	int *nums = new int[n];
	srand(time(0));
	for(int i = 0;i < n;i++)nums[i] = (rand()%1000);
	printf("Before sortting:\n");
	for(int i = 0;i < n;i++)
	{
		if(i%8==0&&i!=0)printf("\n");
		printf("%8d",nums[i]);
	}
	printf("\n");
	sortting(n,nums);
	printf("After sortting:\n");
	for(int i = 0;i < n;i++)
	{
		if(i%8==0&&i!=0)printf("\n");
		printf("%8d",nums[i]);
	}
	printf("\n");
	delete []nums;
	return 0;
}
