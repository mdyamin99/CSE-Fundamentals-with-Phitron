#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float n=(100-a);
    float x=b/n;
    float m=(x*a)+b;
    printf("%.2f",m);
    return 0;
}