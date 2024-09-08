#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;
    vector<int> v[n];
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        vector<int> vv;
        
        for(int l:v[x])
        {
            vv.push_back(l);
        }
        sort(vv.begin(),vv.end(),greater<int>());
        if(vv.size()==0)
        {
            cout<<"-1";
        }
        else
        {
            for(int i=0;i<vv.size();i++)
            {
                cout<<vv[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}