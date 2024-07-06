#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    vector<int> v(ar,ar+n);
    int ans=0;
    for(int i=1;i<n;i++)
    {
        if(ar[i]==v[i-1])
        {
            ans=1;
        }
    }
    if(ans==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}