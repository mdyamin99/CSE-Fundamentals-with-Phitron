#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        int ans=0;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int z=j+1;z<n;z++)
                {
                    if(ar[i]+ar[j]+ar[z]==s)
                    {
                        ans=1;
                        break;
                    }
                }
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
    }
    return 0;
}