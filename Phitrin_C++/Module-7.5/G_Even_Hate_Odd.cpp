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
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        if(n%2==1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int x=n/2;
            for(int i=0;i<n;i++)
            {
                if(ar[i]%2==0)
                {
                    cnt++;
                }
            }
            cout<<abs(x-cnt)<<endl;
        }
        
    }
    return 0;
}