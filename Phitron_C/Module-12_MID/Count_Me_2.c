#include<stdio.h>

int main()
{
    char c[100002];
    scanf("%s",c);
    int cons=0;

    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u')
        {
            continue;
        }
        else
        {
            cons++;
        }
    }
    printf("%d",cons);
    return 0;
}