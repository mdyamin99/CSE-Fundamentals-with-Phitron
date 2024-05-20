#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int line=(10+n)/2;
    int k=1,s=line;
    for(int i=1;i<=line+1;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        s--;
        k+=2;
        printf("\n");
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}