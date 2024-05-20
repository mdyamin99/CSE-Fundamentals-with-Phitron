#include<stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int ar[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    printf("%d\n",sum);
    return 0;
}