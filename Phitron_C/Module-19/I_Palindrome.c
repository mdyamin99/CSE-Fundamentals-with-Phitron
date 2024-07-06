#include<stdio.h>
#include<string.h>

int main()
{
    char ar[1002];
    scanf("%s",ar);

    int flag=1;
    int i=0,j=strlen(ar)-1;
    while(i<j)
    {
        if(ar[i]!=ar[j])
        {
            flag=0;
        }
        i++;
        j--;
    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}