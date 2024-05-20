#include<stdio.h>

long long int fun(long long int i)
{
    if(i==0) return 1;
    long long int ans=fun(i-1);
    return ans*i;
}

int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int ans=fun(n);
    printf("%lld\n",ans);
    return 0;
}