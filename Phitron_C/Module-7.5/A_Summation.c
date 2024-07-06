#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    long long int sum=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    if(sum<0)
    {
        printf("%lld\n",sum*-1);
    }
    else
    {
        printf("%lld",sum);
    }

    return 0;
}