#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    string s2;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='+')
        {
            s2.push_back(s[i]);
        }
    }
    sort(s2.begin(),s2.end());
    bool flag = false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
        {
            flag=true;
        }
    }
    if(flag==false)
    {
        cout<<s2<<endl;
    }
    else
    {
        vector<char> v;
        for(int i=0;i<s2.size();i++)
        {
            v.push_back(s2[i]);
            v.push_back('+');
        }
        v.pop_back();
        for(char val:v)
        {
            cout<<val;
        }
    }
    return 0;
}