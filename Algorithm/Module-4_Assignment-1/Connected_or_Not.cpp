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
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int cnt=0;
        for(int child:v[x])
        {
            if(child==y)
            {
                cnt=1;
            }
        }
        if(cnt==1)
        {
            cout<<"YES"<<endl;
        }
        else if(x==y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}