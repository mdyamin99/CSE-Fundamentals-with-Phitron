#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int ar[a];

    for(int i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    int m=ar[0],n=ar[0];
    for(int i=0;i<a;i++)
    {
        if(ar[i]>m)
        {
            m=ar[i];
        }
        else if(ar[i]<n)
        {
            n=ar[i];
        }
    }
    for(int i=0;i<a;i++)
    {
        if(ar[i]==m)
        {
            ar[i]+=n-m;
        }
        else if(ar[i]==n)
        {
            ar[i]+=m-n;
        }
    }
    for(int i=0;i<a;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}