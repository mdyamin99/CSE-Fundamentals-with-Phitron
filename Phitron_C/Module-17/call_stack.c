#include<stdio.h>

void world()
{
    printf("World start\n");
    printf("World end\n");
}

void hello()
{
    printf("Hello start\n");
    world();
    printf("Hello end\n");
}

int main()
{
    printf("Main start\n");
    hello();
    printf("Main end\n");
    return 0;
}