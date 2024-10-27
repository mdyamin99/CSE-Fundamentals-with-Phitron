#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        for(int i=1;i<=n;i++)
        {
            cout<<n-ar[i]+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}