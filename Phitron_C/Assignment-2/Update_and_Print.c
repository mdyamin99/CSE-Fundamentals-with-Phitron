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
    int a,k;
    scanf("%d%d",&a,&k);

    for(int i=n-1;i>=0;i--)
    {
        if(i==a)
        {
            ar[i]+=k-ar[i];
        }
        printf("%d ",ar[i]);
    }
    return 0;
}