#include <cstdio>
#include <algorithm>
using namespace std;
struct mooncake
{
	float store;
	float sumprice;
	float price;
};
bool cmp(mooncake a,mooncake b)
{
	return a.price > b.price;
}
int main()
{
	int n;
	float Demand;
	struct mooncake *cake;
	scanf("%d%f",&n,&Demand);
	cake = new mooncake[n];
	for(int i=0;i<n;i++)
	{
		scanf("%f",&cake[i].store);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%f",&cake[i].sumprice);
		cake[i].price = cake[i].sumprice / cake[i].store;
	}
	sort(cake,cake+n,cmp);
	float answer = 0;
	for(int i=0;i<n;i++)
	{
		if(Demand>=cake[i].store)
		{
			Demand-=cake[i].store;
			answer+=cake[i].sumprice;
		}
		else
		{
			answer+=cake[i].price * Demand;
			break;
		}
	}
	printf("%.2f\n",answer );
	delete []cake;
	return 0;
}
