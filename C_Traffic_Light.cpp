#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char a;
        cin>>n>>a;
        string s;
        cin>>s;
        s+=s;
        if(a=='g')
        {
            cout<<"0"<<endl;
            continue;
        }
        int cnt=0,res=0;
        bool f=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='g')
            {
                res=max(cnt,res);
                f=false;
            }
            if(s[i]==a && f==false)
            {
                f=true;
                cnt=0;
            }
            if(f) cnt++;
        }
        cout<<res<<endl;
    }
    return 0;
}