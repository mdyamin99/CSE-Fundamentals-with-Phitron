#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int m;
        int a,b,c;
        scanf("%lld%d%d%d",&m,&a,&b,&c);
        int mul=a*b*c;
        long long int ans=m/mul;
        if(ans*mul!=m)
        {
            printf("-1\n");
        }
        else
        {
            printf("%lld\n",ans);
        }
    }
    return 0;
}