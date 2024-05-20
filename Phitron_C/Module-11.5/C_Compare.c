#include<stdio.h>
#include<string.h>

int main()
{
    char a[22],b[22];
    scanf("%s %s",a,b);
    int c=strcmp(a,b);

    if(c==0)
    {
        printf("%s",a);
    }
    else if(c>0)
    {
        printf("%s",b);
    }
    else
    {
        printf("%s",a);
    }

    return 0;
}