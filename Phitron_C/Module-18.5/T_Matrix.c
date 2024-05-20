#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row;
    scanf("%d",&row);
    int ar[row][row];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }

    int p_sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i==j)
            {
                p_sum+=ar[i][j];
            }
        }
    }
    
    int s_sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i+j==row-1)
            {
                s_sum+=ar[i][j];
            }
        }
    }
    int sum=p_sum-s_sum;
    int summ=abs(sum);
    printf("%d\n",summ);
    return 0;
}