#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int ar[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int ans=1;
    if(row!=col)
    {
        ans=0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                if(ar[i][j]!=1)
                {
                    ans=0;
                }
            }
            else if(i+j==row-1)
            {
                if(ar[i][j]!=1)
                {
                    ans=0;
                }
            }
            else if(ar[i][j]!=0)
            {
                ans=0;
            }
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
    return 0;
}