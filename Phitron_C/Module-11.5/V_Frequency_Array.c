#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int arr[m];
    for(int i=0;i<=m;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        int val=ar[i];
        arr[val]++;
    }
    for(int i=1;i<=m;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}