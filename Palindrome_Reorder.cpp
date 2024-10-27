#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    map<char,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }
    int cnt = 0;
    for(auto x:mp)
    {
        if(x.second %2 != 0)
        {
            cnt++;
        }
    }
    if(cnt > 1)
    {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }

    string fast,midle,last;

    for(auto x:mp)
    {
        if(x.second % 2 != 0)
        {
            for(int j=0;j<x.second;j++)
            {
                midle.push_back(x.first);
            }
        }
        else
        {
            for(int i=0;i<x.second/2;i++)
            {
                fast.push_back(x.first);
                last.push_back(x.first);
            }
        }
    }
    reverse(last.begin(),last.end());

    cout<<fast<<midle<<last<<endl;
    return 0;
}