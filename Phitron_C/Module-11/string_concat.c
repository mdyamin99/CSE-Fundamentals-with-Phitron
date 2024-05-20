#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);

    int l_a=strlen(a);
    int l_b=strlen(b);

    int j=l_a;
    for(int i=0;i<=l_b;i++)
    {
        a[j]=b[i];
        j++;
    }
    printf("%s %s",a,b);
    return 0;
}