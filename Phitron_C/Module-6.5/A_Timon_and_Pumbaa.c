#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    if(a<=b)
    {
        printf("0\n");
    }
    else
    {
        int dif=a-b;
        printf("%d\n",dif);
    }
    return 0;
}