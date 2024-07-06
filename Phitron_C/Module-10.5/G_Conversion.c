#include<stdio.h>

int main()
{
    char ar[100002];
    fgets(ar,sizeof(ar),stdin);

    for(int i=0;ar[i]!='\0';i++)
    {
        if(ar[i]>='a' && ar[i]<='z')
        {
            ar[i]-=32;
        }
        else if(ar[i]>='A' && ar[i]<='Z')
        {
            ar[i]+=32;
        }
        else if(ar[i]==',')
        {
            ar[i]-=12;
        }
    }
    printf("%s",ar);
    return 0;
}