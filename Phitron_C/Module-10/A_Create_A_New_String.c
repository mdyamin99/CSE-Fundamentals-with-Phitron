#include<stdio.h>
#include<string.h>

int main()
{
    char a[10000],b[10000];
    scanf("%s%s",a,b);

    int n=strlen(a);
    int m=strlen(b);

    printf("%d %d\n%s %s",n,m,a,b);
    return 0;
}