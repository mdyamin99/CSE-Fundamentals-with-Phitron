#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char ar[n+1];
        scanf("%s",ar);
        int tig=0,pat=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]=='T')
            {
                tig++;
            }
            else
            {
                pat++;
            }
        }
        if(tig>pat)
        {
            printf("Tiger\n");
        }
        else if(tig<pat)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}