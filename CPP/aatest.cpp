#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "aaprofile.h"
/*int main()
{
	int a=5,b=4,c=6,d=0x3fffffff;
	printf("%f	%f\n",(double)a/b,(double)a/c);
	printf("%d\n",d);
	return 0; 
}*/
// int main(int argc, char const *argv[])
// {
// 	int a;
// 	char c,str[10];
// 	scanf("%d%c%s",&a,&c,str);
// 	printf("a=%d,c=%c,str=%s\n",a,c,str);
// 	return 0;
// }

// int main()
// {
// 	int a[10] = {3,1,5,2,4};
// 	for(int i = 1;i < 5;i++)
// 	{
// 		for(int j = 0;j< 5 - i;j++)
// 			if(a[j]>a[j+1])
// 			{
// 				int temp = a[j];
// 				a[j] = a[j+1];
// 				a[j+1]=temp;
// 			}
// 	}
// 	for(int i = 0;i < 5;i++)
// 		printf("%d\n",a[i]);
// 	return 0; 
// }

// void swap(int* a,int* b)
// {
// 	int temp = *a;
// 	*a = *b;
// 	*b = temp;
// }
// int main(int argc, char const *argv[])
// {
// 	int a = 1286,b=666;
// 	swap(&a,&b);
// 	printf("%d,%d",a,b );
// 	return 0;
// }

// struct Point
// {
// 	int x,y;
// 	Point(){}
// 	Point(int _x,int _y):x(_x),y(_y){}
// }pt[10];
// int main(int argc, char const *argv[])
// {
// 	int num = 0;
// 	for(int i = 1;i < 4;i++)
// 	{
// 		for(int j = 1;j < 4;j++)
// 		{
// 			pt[num++]=Point(i,j);
// 		}
// 	}
// 	printf("%d\n",num );
// 	for(int i = 0;i < num;i++)
// 		printf("%d, %d\n",pt[i].x,pt[i].y );
// 	return 0;
// }


// int main(int argc, char const *argv[])
// {
// 	double db1 = 4 * asin(sqrt(2)/2);
// 	double db2 = 3 * asin(sqrt(3)/2);
// 	double tiny = fabs(db2-db1);
// 	printf("The true value of pi is %f.\n",Pi);
// 	printf("The db1 value is %f.\n",db1);
// 	printf("The db2 value is %f.\n",db2);
// 	printf("The tiny diff of two dbs is %lf.\n",tiny); 
// 	printf("Old judge as below:\n");
// 	if(db1==db2)
// 	{
// 		printf("db1 equals db2.\n");
// 	}
// 	else
// 	{
// 		printf("db1 dosn't equal db2.\n");
// 	}
// 	printf("New judge as below:\n");
// 	if(Equ(db2,db2))
// 	{
// 		printf("db1 equals db2.\n");
// 	}
// 	else
// 	{
// 		printf("db1 dosn't equal db2.\n");
// 	}
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	/* code */
//     int n,step = 0;
//     printf("Input number n:\n");
//     scanf("%d",&n);
//     while(n!=1)
//     {
//         if(n%2)n=3*n+1;
//         else n/=2;
//         step++;
//     }
//     printf("Take %d steps.\n",step);
// 	return 0;
// }


// int main()
// {
// 	int N,line;
// 	char C;
// 	scanf("%d %c",&N,&C);
// 	if(N%2)line=(N+1)/2;
// 	else line = N/2;
// 	for(int i = 0;i < N;i++)printf("%c",C);
// 	printf("\n");
// 	for(int i = 0;i < line-2;i++)
// 	{
// 		printf("%c",C);
// 		for(int j = 0;j < N-2;j++)printf(" ");
// 		printf("%c\n",C);
// 	}
// 	for(int i = 0;i < N;i++)printf("%c",C);
// 	printf("\n");
// 	// system("pause");
// 	return 0;
// }

// Hello.cpp : 定义控制台应用程序的入口点。
//

/*阶乘运算*/
using namespace std;
void Print_Factorial(const int N);

int main()
{
	int N;

	scanf("%d", &N);
	Print_Factorial(N);
	return 0;
}

void numUp(int *p,int n)
{
	int x;
	for (int i = 0; i<n; i++)
	{
		if (p[i]>9)
		{
			x = p[i] / 10;
			p[i] %= 10;
			p[i + 1] += x;
		}
	}
}

int ansnum(int n)
{
	double weishu = 0.0;
	for (int i = 1; i <= n; i++)
	{
		weishu += log10(i);
	}
	return int(floor(weishu));
}

void Print_Factorial(const int N)
{
	if (N<0 || N>1000)
	{
		printf("Invalid input\n");
		return;
	}
	int i, j,m = ansnum(N);
	int *result = new int[m+1];
	for (int i = 0; i <= m; i++)
	{
		*(result + i) = 0;
	}
	result[0] = 1;
	for (i = 1; i < N + 1; i++)
	{
		j = 0;
		while (j <= m)
		{
			result[j] *= i;
			j++;
		}
		numUp(result,m+1);
	}
	int k = m;
	while (result[k] == 0)k--;
	for (; k > -1; k--)
	{
		printf("%d", result[k]);
	}
	printf("\n");
	delete[]result;
}

