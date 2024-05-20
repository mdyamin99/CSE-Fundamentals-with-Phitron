#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int sum=0,sum_n=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>0)
        {
            sum+=ar[i];
        }
        else
        {
            sum_n+=ar[i];
        }
    }
    printf("%d %d",sum,sum_n);
    return 0;
}