#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char ar[n];
    scanf("%s",ar);
   
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=ar[i]-'0';
    }
    printf("%d",sum);
    return 0;
}