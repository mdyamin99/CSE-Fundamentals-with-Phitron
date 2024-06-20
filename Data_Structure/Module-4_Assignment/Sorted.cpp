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
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        if(n==1 || n==0)
        {
            flag=true;
        }
        for(int i=1;i<n;i++)
        {
            if(ar[i-1]>ar[i])
            {
                flag=false;
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