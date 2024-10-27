#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    int sum=0;
    int mx=INT_MIN;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        sum-=a;
        sum+=b;
        mx=max(mx,sum);
    }
    cout<<mx<<endl;
    return 0;
}