#include<stdio.h>

int main()
{
    char n,a;
    scanf("%c",&n);

    if(n>='a' && n<='z')
    {
        a=n-32;
        printf("%c\n",a);
    }
    else
    {
        a=n+32;
        printf("%c\n",a);
    }
    return 0;
}