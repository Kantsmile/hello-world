/*PAT B1001*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
    int n,step = 0;
    printf("Input number n:\n");
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%2)n=3*n+1;
        else n/=2;
        step++;
    }
    printf("Take %d steps.\n",step);
	return 0;
}
