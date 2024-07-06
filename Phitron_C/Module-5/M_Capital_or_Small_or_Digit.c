#include<stdio.h>

int main()
{
    char n;
    scanf("%c",&n);

    if(n>='0' && n<='9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if(n>='A' && n<='Z')
        {
            printf("IS CAPITAL\n");
        }
        else
        {
            printf("IS SMALL\n");
        }
    }
    return 0;
}