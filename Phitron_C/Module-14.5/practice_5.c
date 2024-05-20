#include<stdio.h>

char capital_to_small(char n)
{
    char s;
    if(n>='A' && n<='Z')
    {
        s=n+32;
    }
    return s;
}

int main()
{
    char a;
    scanf("%c",&a);
    char s=capital_to_small(a);
    printf("%c",s);
    return 0;
}