#include<stdio.h>
#include<string.h>

void fun(char ar[])
{
    printf("%d",strlen(ar));
}

int main()
{
    char ar[10]="Hello";
    fun(ar);
    return 0;
}