#include<stdio.h>

void print(int a)
{
    for(int i=1;i<=a;i++)
    {
        if(a==i)
        {
            printf("%d",i);
        }
        else
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int a;
    scanf("%d",&a);
    print(a);
    return 0;
}