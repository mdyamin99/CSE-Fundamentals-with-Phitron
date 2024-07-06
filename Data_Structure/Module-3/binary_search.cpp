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
    int l=0;
    int r=n-1;
    int x;
    cin>>x;
    bool flag=false;
    while(l<=r)
    {
        int mid_index=(l+r)/2;
        if(ar[mid_index]==x)
        {
            flag=true;
        }
        if(x>ar[mid_index])
        {
            l=mid_index+1;
        }
        else
        {
            r=mid_index-1;
        }
    }
    if(flag==true)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}