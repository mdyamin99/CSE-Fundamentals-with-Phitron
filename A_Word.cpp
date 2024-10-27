#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int u_cnt=0;
    int l_cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            u_cnt++;
        }
        if(s[i]>='a' && s[i]<='z')
        {
            l_cnt++;
        }
    }
    if(l_cnt>=u_cnt)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]+=32;
            }
        }
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]-=32;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}