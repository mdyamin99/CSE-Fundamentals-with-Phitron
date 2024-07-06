#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char ar[105];
        scanf("%s",ar);
        int l=strlen(ar);
        if(l<=10)
        {
            printf("%s\n",ar);
        }
        else
        {
            printf("%c%d%c\n",ar[0],l-2,ar[l-1]);
        }
    }
    return 0;
}