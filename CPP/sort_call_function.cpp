/*调用函数排序*/
#include <stdio.h>
#include <ctime>
#include <algorithm>
using namespace std;
void printArray(int n,int *p)
{
	for(int i = 0;i < n;i++)
	{
		if(i%8==0&&i!=0)printf("\n");
		printf("%8d",p[i]);
	}
	printf("\n");
}
bool cmp(int a,int b)
{
	return a < b;
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
	printArray(n,nums);
	sort(nums,nums+n,cmp);
	printf("After sortting:\n");
	printArray(n,nums);
	delete []nums;
	return 0;
}
