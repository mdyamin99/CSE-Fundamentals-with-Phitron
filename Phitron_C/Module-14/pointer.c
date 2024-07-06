#include<stdio.h>

int main()
{
    int x=10;

    int*p=&x;
    printf("%d\n",*p);

    *p=500;
    printf("%d",x);
    return 0;
}