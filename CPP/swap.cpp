#include <stdio.h>
void swap(int* a,int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(int argc, char const *argv[])
{
	int a = 1286,b=666;
	swap(&a,&b);
	printf("%d,%d",a,b );
	return 0;
}
