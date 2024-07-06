#include<stdio.h>
#include<string.h>

int main()
{
    char a[1002];
    scanf("%s",a);
    
    int i=0,j=strlen(a)-1;

    int count=1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            count=0;
        }
        i++;
        j--;
    }
    if(count==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}