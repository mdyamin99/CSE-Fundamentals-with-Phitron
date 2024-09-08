#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string word;
    stringstream ss(s);
    map<string,int> mp;
    while(ss>>word)
    {
        mp[word]++;
    }
    for(auto it=mp.begin();it != mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    cout<<mp["cricket"]<<endl;
    return 0;
}