#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int mn=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                int ans=(ar[i-1]+ar[j-1])+(j-i);
                mn=min(mn,ans);
            }
        }
        cout<<mn<<endl;

    }
    return 0;
}