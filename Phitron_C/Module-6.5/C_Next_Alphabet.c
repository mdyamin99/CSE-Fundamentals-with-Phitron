#include<stdio.h>

int main()
{
    char n;
    scanf("%c",&n);

    if(n=='z')
    {
        printf("a");
    }

    if(n>='a'&&n<='y')
    {
        printf("%c\n",n+1);
    }
    return 0;
}