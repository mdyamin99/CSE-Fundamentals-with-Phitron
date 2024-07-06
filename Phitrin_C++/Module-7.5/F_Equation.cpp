#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,n;
    cin>>a>>n;
    long long int ans=0;
    for(int i=2;i<=n;i+=2)
    {
        ans+=pow(a*1.0,i*1.0);
    }
    cout<<ans<<endl;
    return 0;
}