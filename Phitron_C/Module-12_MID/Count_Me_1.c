#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int div=0;
    int divv=0;
    int s=0;

    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            div++;
        }
        if(ar[i]%3==0)
        {
            if(ar[i]%2==0)
            {
                s++;
            }
            divv++;
        }
    }
    printf("%d %d",div,divv-s);
    return 0;
}