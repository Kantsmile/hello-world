#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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


// /*PAT B1001*/
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


// /*PAT B1032*/
// #include <stdio.h>
// int main()
// {
// 	int n;
// 	scanf("%d",&n);
// 	int school[100010] = {0};
// 	for(int i = 1;i <= n;i++)
// 	{
// 		int schID,score;
// 		scanf("%d%d",&schID,&score);
// 		school[schID] += score;
// 	}
// 	int MAX = -1,k;
// 	for(int i = 1;i <= 10010;i++)
// 	{
// 		if(school[i]>MAX)
// 		{
// 			MAX = school[i];
// 			k = i;
// 		}
// 	}
// 	printf("%d %d\n",k,MAX);
// 	return 0;
// }


// /*codeup 1934*/
// #include <stdio.h>
// int main()
// {
// 	int n,x,k,array[200] = {0};
// 	scanf("%d",&n);
// 	for(int i = 0;i < n;i++)
// 	{
// 		scanf("%d",array+i);
// 	}
// 	scanf("%d",&x);
// 	for(k = 0;k < n;k++)
// 	{
// 		if(x==array[k])
// 		{
// 			printf("%d\n",k);
// 			break;
// 		}	
// 	}
// 	if(k==n)printf("-1\n");
// 	return 0;
// }


// /*PAT B1036*/
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


// /*PAT B1009*/
// #include <stdio.h>
// #include <string.h>
// int main(int argc, char const *argv[])
// {
// 	char str[85];
// 	gets(str);
// 	int len = strlen(str),row = 0,column = 0;
// 	char ans[85][85];
// 	for(int i = 0;i < len;i++)
// 	{
// 		if(str[i]!=' ')
// 		{
// 			ans[row][column++] = str[i];
// 		}
// 		else
// 		{
// 			ans[row++][column] = '\0';
// 			column = 0;
// 		}
// 	}
// 	for(int i = row;i >= 0;i--)
// 	{
// 		printf("%s",ans[i]);
// 		if(i)printf(" ");
// 		else printf("\n");
// 	}
// 	return 0;
// }



// /*简单排序*/
// #include <stdio.h>
// int main()
// {
// 	printf("How many numbers to be sorted?\n");
// 	int n;
// 	scanf("%d",&n);
// 	int nums[n];
// 	for(int i = 0;i < n;i++)scanf("%d",nums+i);
// 	for(int i = 0;i < n;i++)
// 	{
// 		for(int j = i+1;j < n;j++)
// 		{
// 			if(nums[j]<nums[i])
// 			{
// 				int temp = nums[i];
// 				nums[i] = nums[j];
// 				nums[j] = temp;
// 			}
// 		}
// 	}
// 	for(int i = 0;i < n;i++)printf("%d\n",nums[i]);
// 	return 0;
// }


// /*选择排序*/
// #include <stdio.h>
// #include <ctime>
// #include <algorithm>
// void sortting(int n,int *p)
// {
// 	for(int i = 0;i < n;i++)
// 	{
// 		for(int j = i+1;j < n;j++)
// 		{
// 			if(p[j]<p[i])
// 			{
// 				int temp = p[i];
// 				p[i] = p[j];
// 				p[j] = temp;
// 			}
// 		}
// 	}
// }
// int main()
// {
// 	printf("How many numbers to be sorted?\n");
// 	int n;
// 	scanf("%d",&n);
// 	int *nums = new int[n];
// 	srand(time(0));
// 	for(int i = 0;i < n;i++)nums[i] = (rand()%1000);
// 	printf("Before sortting:\n");
// 	for(int i = 0;i < n;i++)
// 	{
// 		if(i%8==0&&i!=0)printf("\n");
// 		printf("%8d",nums[i]);
// 	}
// 	printf("\n");
// 	sortting(n,nums);
// 	printf("After sortting:\n");
// 	for(int i = 0;i < n;i++)
// 	{
// 		if(i%8==0&&i!=0)printf("\n");
// 		printf("%8d",nums[i]);
// 	}
// 	printf("\n");
// delete []nums;
// 	return 0;
// }


/*插入排序*/
// #include <stdio.h>
// #include <ctime>
// #include <algorithm>
// void sortting(int n,int *p)
// {
// 	for(int i = 1;i < n;i++)
// 	{
// 		for(int j = 0;j < i;j++)
// 		{
// 			if(p[i]<p[j])
// 			{
// 				int temp = p[i];
// 				for(int k = i;k > j;k--)p[k]=p[k-1];
// 				p[j] = temp;
// 			}
// 		}
// 	}
// }
// int main()
// {
// 	printf("How many numbers to be sorted?\n");
// 	int n;
// 	scanf("%d",&n);
// 	int *nums = new int[n];
// 	srand(time(0));
// 	for(int i = 0;i < n;i++)nums[i] = (rand()%1000);
// 	printf("Before sortting:\n");
// 	for(int i = 0;i < n;i++)
// 	{
// 		if(i%8==0&&i!=0)printf("\n");
// 		printf("%8d",nums[i]);
// 	}
// 	printf("\n");
// 	sortting(n,nums);
// 	printf("After sortting:\n");
// 	for(int i = 0;i < n;i++)
// 	{
// 		if(i%8==0&&i!=0)printf("\n");
// 		printf("%8d",nums[i]);
// 	}
// 	printf("\n");
// 	delete []nums;
// 	return 0;
// }


// /*调用函数排序*/
// #include <stdio.h>
// #include <ctime>
// #include <algorithm>
// using namespace std;
// void printArray(int n,int *p)
// {
// 	for(int i = 0;i < n;i++)
// 	{
// 		if(i%8==0&&i!=0)printf("\n");
// 		printf("%8d",p[i]);
// 	}
// 	printf("\n");
// }
// bool cmp(int a,int b)
// {
// 	return a < b;
// }
// int main()
// {
// 	printf("How many numbers to be sorted?\n");
// 	int n;
// 	double duration = 0.0;
// 	clock_t start,end;
// 	scanf("%d",&n);
// 	int *nums = new int[n];
// 	srand(time(0));
// 	for(int i = 0;i < n;i++)nums[i] = (rand()%1000);
// 	printf("Before sortting:\n");
// 	printArray(n,nums);
// 	start = clock();
// 	sort(nums,nums+n,cmp);
// 	end = clock();
// 	duration = (double)(end-start)/CLOCKS_PER_SEC;
// 	printf("After sortting:\n");
// 	printArray(n,nums);
// 	printf("Totally %f seconds used.\n",duration);
// 	delete []nums;
// 	return 0;
// }


// /*10000以内阶乘运算*/
// using namespace std;
// void Print_Factorial(const int N);

// int main()
// {
// 	int N;
// 	scanf("%d", &N);
// 	if(N < 0 || N > 10000)
// 	{
// 		printf("Invalid input.\n");
// 		return -1;
// 	}
// 	Print_Factorial(N);
// 	return 0;
// }

// void numUp(int *p,int n)
// {
// 	int x;
// 	for (int i = 0; i <= n; i++)
// 	{
// 		if (p[i]>9)
// 		{
// 			x = p[i] / 10;
// 			p[i] %= 10;
// 			p[i + 1] += x;
// 		}
// 	}
// }

// int ansnum(int n)
// {
// 	double digits = 0.0;
// 	for (int i = 1; i <= n; i++)
// 	{
// 		digits += log10(i);
// 	}
// 	return int(floor(digits));
// }

// void Print_Factorial(const int N)
// {
// 	int i, j,m = ansnum(N);
// 	int *result = new int[m+1];
// 	for (int i = 0; i <= m; i++)result[i] = 0;
// 	result[0] = 1;
// 	for (i = 1; i < N + 1; i++)
// 	{
// 		j = 0;
// 		while (j <= m)
// 		{
// 			result[j] *= i;
// 			j++;
// 		}
// 		numUp(result,m);
// 	}
// 	int k = m;
// 	while (result[k] == 0)k--;
// 	for (; k > -1; k--)
// 	{
// 		printf("%d", result[k]);
// 	}
// 	printf("\n");
// 	delete []result;
// }



// /*PAT 1025*/
// #include <algorithm>
// #include <string.h>
// using namespace std;
// struct Student
// {
// 	char id[15];
// 	int score;
// 	int local_rank;
// 	int location;
// }stu[30001];
// bool cmp(Student a,Student b)
// {
// 	if(a.score!=b.score)return a.score > b.score;
// 	else return strcmp(a.id,b.id)<0;
// }
// int main()
// {
// 	int n,k,num=0;
// 	scanf("%d",&n);
// 	for(int i=0;i<n;i++)
// 	{
// 		scanf("%d",&k);
// 		int j = k;
// 		while(j--)
// 		{
// 			scanf("%s %d",stu[num].id,&stu[num].score);
// 			stu[num].location = i+1;
// 			num++;
// 		}
// 		sort(stu+num-k,stu+num,cmp);
// 		stu[num-k].local_rank = 1;
// 		for(int j=num-k+1;j<num;j++)
// 		{
// 			if(stu[j].score==stu[j-1].score)stu[j].local_rank=stu[j-1].local_rank;
// 			else stu[j].local_rank = j-num+k+1;
// 		}
// 	}
// 	printf("%d\n",num);
// 	int r = 1;
// 	sort(stu,stu+num,cmp);
// 	for(int i=0;i<num;i++)
// 	{
// 		printf("%s ",stu[i].id);
// 		if(i>0&&stu[i].score!=stu[i-1].score)r=i+1;
// 		printf("%d %d %d\n",r,stu[i].location,stu[i].local_rank);
// 	}
// 	return 0;
// }


// /*PAT_B1020月饼*/
// #include <cstdio>
// #include <algorithm>
// using namespace std;
// struct mooncake
// {
// 	float store;
// 	float sumprice;
// 	float price;
// };
// bool cmp(mooncake a,mooncake b)
// {
// 	return a.price > b.price;
// }
// int main()
// {
// 	int n;
// 	float Demand;
// 	struct mooncake *cake;
// 	scanf("%d%f",&n,&Demand);
// 	cake = new mooncake[n];
// 	for(int i=0;i<n;i++)
// 	{
// 		scanf("%f",&cake[i].store);
// 	}
// 	for(int i=0;i<n;i++)
// 	{
// 		scanf("%f",&cake[i].sumprice);
// 		cake[i].price = cake[i].sumprice / cake[i].store;
// 	}
// 	sort(cake,cake+n,cmp);
// 	float answer = 0;
// 	for(int i=0;i<n;i++)
// 	{
// 		if(Demand>=cake[i].store)
// 		{
// 			Demand-=cake[i].store;
// 			answer+=cake[i].sumprice;
// 		}
// 		else
// 		{
// 			answer+=cake[i].price * Demand;
// 			break;
// 		}
// 	}
// 	printf("%.2f\n",answer );
// 	delete []cake;
// 	return 0;
// }


#include <cstdio>
int main()
{
	int a[10],N=0,*p;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		N+=a[i];
	}
	p=new int [N];
	int k=0;
	for(int i=0;i<10;i++)
	{
		if(a[i])
		{
			for(int j=0;j<a[i];j++)
			{
				p[k]=i;
				k++;
			}
		}
	}
	if(p[0]==0)
	{
		for(int i=1;i<N;i++)
		{
			if(p[i])
			{
				p[0]=p[i];
				p[i]=0;
				break;
			}
		}
	}
	for(int i=0;i<N;i++)
	{
		printf("%d",p[i]);
	}
	printf("\n");
	delete []p;
	return 0;
}