#include<stdio.h>

int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int ar[row][col];
    int element=row*col;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int cnt=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(ar[i][j]==0)
            {
                cnt++;
            }
        }
    }
    if(cnt==element)
    {
        printf("Zero matrix\n");
    }
    else
    {
        printf("Not zero matrix\n");
    }
    return 0;
}