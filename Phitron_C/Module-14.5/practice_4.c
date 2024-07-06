#include<stdio.h>

char small_to_capital(char n)
{
    char s;
    if(n>='a' && n<='z')
    {
        s=n-32;
    }
    return s;
}

int main()
{
    char a;
    scanf("%c",&a);
    char c=small_to_capital(a);
    printf("%c",c);
    return 0;
}