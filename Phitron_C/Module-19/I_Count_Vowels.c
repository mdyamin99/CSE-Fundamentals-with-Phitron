#include<stdio.h>

int fun(char s[],int i)
{
    if(s[i]=='\0') return 0;
    int ans=fun(s,i+1);
    if(s[i]>='A' && s[i]<='Z')
    {
        s[i]+=32;
    }
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    {
        return ans+1;
    }
    else
    {
        return ans;
    }
}

int main()
{
    char s[205];
    fgets(s,205,stdin);
    int ans=fun(s,0);
    printf("%d\n",ans);
    return 0;
}