#include <stdio.h>
struct Point
{
	int x,y;
	Point(){}
	Point(int _x,int _y):x(_x),y(_y){}
}pt[10];
int main(int argc, char const *argv[])
{
	int num = 0;
	for(int i = 1;i < 4;i++)
	{
		for(int j = 1;j < 4;j++)
		{
			pt[num++]=Point(i,j);
		}
	}
	printf("%d\n",num );
	for(int i = 0;i < num;i++)
		printf("%d, %d\n",pt[i].x,pt[i].y );
	return 0;
}
