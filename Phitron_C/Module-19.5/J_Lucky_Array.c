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
    int min=ar[0];
    for(int i=0;i<n;i++)
    {
        if(min>ar[i])
        {
            min=ar[i];
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==min)
        {
            ans++;
        }
    }
    if(ans%2!=0)
    {
        printf("Lucky\n");
    }
    else
    {
        printf("Unlucky\n");
    }
    return 0;
}