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
    int q;
    cin>>q;
    sort(ar,ar+n);
    while(q--)
    {
        int l=0,r=n-1;
        bool flag=false;
        int x;
        cin>>x;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(ar[mid]==x)
            {
                flag=true;
            }
            if(x>ar[mid])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(flag==true)
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