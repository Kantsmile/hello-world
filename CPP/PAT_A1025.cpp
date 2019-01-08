#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
struct Student
{
	char id[15];
	int score;
	int local_rank;
	int location;
}stu[30001];
bool cmp(Student a,Student b)
{
	if(a.score!=b.score)return a.score > b.score;
	else return strcmp(a.id,b.id)<0;
}
int main()
{
	int n,k,num=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&k);
		int j = k;
		while(j--)
		{
			scanf("%s %d",stu[num].id,&stu[num].score);
			stu[num].location = i+1;
			num++;
		}
		sort(stu+num-k,stu+num,cmp);
		stu[num-k].local_rank = 1;
		for(int j=num-k+1;j<num;j++)
		{
			if(stu[j].score==stu[j-1].score)stu[j].local_rank=stu[j-1].local_rank;
			else stu[j].local_rank = j-num+k+1;
		}
	}
	printf("%d\n",num);
	int r = 1;
	sort(stu,stu+num,cmp);
	for(int i=0;i<num;i++)
	{
		printf("%s ",stu[i].id);
		if(i>0&&stu[i].score!=stu[i-1].score)r=i+1;
		printf("%d %d %d\n",r,stu[i].location,stu[i].local_rank);
	}
	return 0;
}