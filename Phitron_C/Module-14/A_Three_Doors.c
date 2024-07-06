#include<stdio.h>

void solve()
{
    int n;
    scanf("%d",&n);
    int ar[4];
    for(int i=1;i<=3;i++)
    {
        scanf("%d",&ar[i]);
    }
    if(ar[n]==0)
    {
        printf("NO\n");
        return;
    }
    n=ar[n];
    if(ar[n]==0)
    {
        printf("NO\n");
        return;
    }
    printf("YES\n");
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
    return 0;
}