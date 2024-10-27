#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    int cnt=0;
    while(t--)
    {
        int p,q;
        cin>>p>>q;
        int ans=q-p;
        if(ans>=2)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}