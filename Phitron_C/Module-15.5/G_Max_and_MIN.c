#include<stdio.h>

void min_max(void)
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int min=ar[0];
    int max=ar[0];
    for(int i=0;i<n;i++)
    {
        if(min>ar[i])
        {
            min=ar[i];
        }
        if(max<ar[i])
        {
            max=ar[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}

int main()
{
    min_max();
    return 0;
}