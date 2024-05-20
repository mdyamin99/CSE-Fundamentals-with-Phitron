#include<stdio.h>

void sort(int a,int b,int c)
{
    if(a<=b && a<=c)
    {
        if(b<=c)
        {
            printf("%d\n%d\n%d\n",a,b,c);
        }
        else
        {
            printf("%d\n%d\n%d\n",a,c,b);
        }
    }
    else if(b<=a && b<=c)
    {
        if(c<=a)
        {
            printf("%d\n%d\n%d\n",b,c,a);
        }
        else
        {
            printf("%d\n%d\n%d\n",b,a,c);
        }
    }
    else if(c<=a && c<=b)
    {
        if(a<=b)
        {
            printf("%d\n%d\n%d\n",c,a,b);
        }
        else
        {
            printf("%d\n%d\n%d\n",c,b,a);
        }
    }
    printf("\n%d\n%d\n%d\n",a,b,c);
}

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    sort(a,b,c);
    return 0;
}