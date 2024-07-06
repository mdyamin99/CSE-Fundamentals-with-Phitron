#include<stdio.h>

int my_abs(int n)
{
    if(n<0)
    {
        n=(n*-1);
    }
    return n;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a=my_abs(n);
    printf("%d",a);
    return 0;
}