#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    long long int ans=v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i]>=v[i-1])
        {
            v[i]=v[i-1]-1;
        }
        if(v[i]<0)
        {
            v[i]=0;
        }
        ans+=v[i];
    }
    cout<<ans<<endl;
    return 0;
}