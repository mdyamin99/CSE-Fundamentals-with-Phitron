#include<stdio.h>

int main()
{
    char n;
    int cnt[26]={0};
    while(scanf("%c",&n)!=EOF)
    {
        int index=n-97;
        cnt[index]++;
    }
    for(int i=0;i<26;i++)
    {
        if(cnt[i]>0)
        {
            printf("%c : %d\n",i+97,cnt[i]);
        }
    }
    return 0;
}