#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int sum=a+b;
    printf("%d + %d = %d\n",a,b,sum);

    int dif=a-b;
    printf("%d - %d = %d\n",a,b,dif);

    int mul=a*b;
    printf("%d * %d = %d\n",a,b,mul);

    float div=(float)a/b;
    printf("%d / %d = %0.2f\n",a,b,div);
    return 0;
}