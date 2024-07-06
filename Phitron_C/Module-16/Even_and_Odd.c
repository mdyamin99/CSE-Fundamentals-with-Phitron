#include<stdio.h>

void odd_even()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int e_c=0,o_c=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            e_c++;
        }
        else
        {
            o_c++;
        }
    }
    printf("%d %d",e_c,o_c);
}

int main()
{
    odd_even();
    return 0;
}