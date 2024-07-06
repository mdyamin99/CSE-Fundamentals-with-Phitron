#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);

    int vlu=strcmp(a,b);

    if(vlu==0)
    {
        printf("Same\n");
    }
    else if(vlu>0)
    {
        printf("B coto\n");
    }
    else
    {
        printf("A coto\n");
    }
    return 0;
}