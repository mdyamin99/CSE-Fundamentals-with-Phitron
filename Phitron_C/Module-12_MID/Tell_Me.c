#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int a;
        scanf("%d",&a);
        int ar[a];
        for(int i=0;i<a;i++)
        {
            scanf("%d",&ar[i]);
        }
        int m;
        scanf("%d",&m);
        int ans=0;
        for(int i=0;i<a;i++)
        {
            if(ar[i]==m)
            {
                ans=1;
            }
        }
        if(ans==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}