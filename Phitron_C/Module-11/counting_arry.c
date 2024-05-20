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
    int cnt[7]={0};
    for(int i=0;i<n;i++)
    {
        int val=ar[i];
        cnt[val]++;
    }
    for(int i=0;i<=6;i++)
    {
        printf("%d - %d\n",i,cnt[i]);
    }    
}