#include<stdio.h>

int my_len(char ar[])
{
    int ans=0;
    for(int i=0;ar[i]!='\0';i++)
    {
        ans++;
    }
    return ans;
}

int main()
{
    char ar[500];
    scanf("%s",ar);
    int a=my_len(ar);
    printf("%d",a);
    return 0;
}