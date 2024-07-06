#include<stdio.h>

void fun(int x)
{
    x=200;
    printf("Fun X er value = %d\n",x);
}

int main()
{
    int x=10;
    fun(x);
    printf("X er value = %d\n",x);
    return 0;
}
//  2 ta alada..