#include<stdio.h>

int fun(int ar[],int n,int i)
{
    int sum=0;
    if(i==n) return;
    fun(ar,n,i+1);
    sum+=ar[i];
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int sum=fun(ar,n,0);
    printf("%d",sum);
    return 0;
}