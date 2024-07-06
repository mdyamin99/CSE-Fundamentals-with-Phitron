#include<stdio.h>

int main()
{
    int x=100;
    int * ptr = &x;
    *ptr= 200;

    printf("X er value = %d\n",x);
    printf("Ptr er value = %d\n",*ptr);
    return 0;
}