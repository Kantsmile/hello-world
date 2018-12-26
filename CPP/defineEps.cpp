#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double Pi = acos(-1.0);
const double eps = 1e-8;
#define Equ(a,b) ((fabs((a)-(b)))<(eps))
int main(int argc, char const *argv[])
{
	double db1 = 4 * asin(sqrt(2)/2);
	double db2 = 3 * asin(sqrt(3)/2);
	double tiny = fabs(db2-db1);
	printf("The true value of pi is %f.\n",Pi);
	printf("The db1 value is %f.\n",db1);
	printf("The db2 value is %f.\n",db2);
	printf("The tiny diff of two dbs is %f.\n",tiny); 
	printf("Old judge as below:\n");
	if(db1==db2)
	{
		printf("db1 equals db2.\n");
	}
	else
	{
		printf("db1 dosn't equal db2.\n");
	}
	printf("New judge as below:\n");
	if(Equ(db2,db2))
	{
		printf("db1 equals db2.\n");
	}
	else
	{
		printf("db1 dosn't equal db2.\n");
	}
    system("pause");
	return 0;
}
