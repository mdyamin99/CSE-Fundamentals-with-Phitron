#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char ar[10003];
        scanf("%s",ar);
        int cap=0,small=0,dig=0;
        for(int i=0;ar[i]!='\0';i++)
        {
            if(ar[i]>='A' && ar[i]<='Z')
            {
                cap++;
            }
            else if(ar[i]>='a' && ar[i]<='z')
            {
                small++;
            }
            else
            {
                dig++;
            }
        }
        printf("%d %d %d\n",cap,small,dig);
    }
    return 0;
}