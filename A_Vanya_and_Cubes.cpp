#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    if(n<=3)
    {
        cout<<'1'<<endl;
    }
    else
    {
        long long int ar[n+1];
        ar[1]=1;
        for(int i=2;i<=n;i++)
        {
            ar[i]=ar[i-1]+i;
        }
        
        long long int pre[n+1];
        pre[1]=ar[1];
        for(int i=2;i<=n;i++)
        {
            pre[i]=ar[i]+pre[i-1];
        }
        int indx;
        for(int i=1;i<=n;i++)
        {
            if(pre[i+1]>n)
            {
                indx=i;
                break;
            }
        }
        cout<<indx<<endl;
    }
    return 0;
}