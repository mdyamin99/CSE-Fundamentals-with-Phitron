#include<stdio.h>

int sum(int x,int y)
{
    int s=x+y;
    return s;

}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int s=sum(a,b);
    printf("%d",s);
    
    return 0;
}