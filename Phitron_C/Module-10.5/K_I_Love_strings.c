#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    scanf("%d",&a);

    for(int i=0;i<a;i++)
    {
        char s[60],t[60];
        scanf("%s %s",s,t);

        int slen=strlen(s);
        int tlen=strlen(t);
        
        int mx;
        if(slen>=tlen)
        {
            mx=slen;
        }
        else
        {
            mx=tlen;
        }
        for(int i=0;i<mx;i++)
        {
            if(i<slen)
            {
                printf("%c",s[i]);
            }
            if(i<tlen)
            {
                printf("%c",t[i]);
            }
        }
        printf("\n");
        
    }
    
    return 0;
}