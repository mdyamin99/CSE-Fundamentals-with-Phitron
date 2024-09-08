#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s;
        getline(cin,s);
        int count=0;
        stringstream ss(s);
        map<string,int> mp;
        string word,ans;
        while(ss>>word)
        {
            mp[word]++;
            if(mp[word] > count)
            {
                count=mp[word];
                ans=word;
            }
        }
        cout<<ans<<" "<<count<<endl;
    }
    return 0;
}