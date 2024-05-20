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
    for(int i=0;i<col;i++)
    {
        printf("%d ",ar[row-1][i]);
    }
    printf("\n");
    for(int i=0;i<row;i++)
    {
        printf("%d ",ar[i][col-1]);
    }
    return 0;
}