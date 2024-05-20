#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    int f_d=a/10;
    int s_d=a%10;
    if(s_d==0)
    {
        printf("YES\n");
    }
    else if(f_d%s_d==0 || s_d%f_d==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}