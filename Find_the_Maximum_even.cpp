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

    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            ans=max(ans,ar[i]);
        }
    }
    for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int anss = ar[i]+ar[j];
                if(anss%2==0)
                {
                    ans=max(ans,anss);
                }
            }
        }
    cout<<ans<<endl;
    return 0;
}