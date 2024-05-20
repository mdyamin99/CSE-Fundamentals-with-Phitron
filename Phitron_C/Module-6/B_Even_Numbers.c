#include<stdio.h>

int main()
{
    int a,i;
    scanf("%d",&a);

    if(a==1)
    {
        printf("-1\n");
    }
    for(i=2;i<=a;i+=2)
    {
        printf("%d\n",i);
    }
    return 0;
}
