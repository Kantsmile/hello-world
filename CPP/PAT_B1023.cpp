#include <stdio.h>
int num[10];
int main()
{
    for(int i=0;i<10;i++)scanf("%d",&num[i]);
    for(int i=1;i<10;i++)
    {
        if(num[i])
        {
            printf("%d",i);
            num[i]--;
            break;
        }
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<num[i];j++)printf("%d",i);
    }
    return 0;
}

/**
测试数据：
2 2 0 0 0 3 0 0 1 0
*/