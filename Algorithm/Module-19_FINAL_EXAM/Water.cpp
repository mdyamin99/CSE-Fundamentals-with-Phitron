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
        int ans1 = INT_MIN;
        int inx1;
        for(int i=0;i<n;i++)
        {
            if(ar[i] > ans1)
            {
                ans1 = ar[i];
                inx1 = i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(ar[i]==ans1)
            {
                ar[i]=INT_MIN;
            }
        }
        int ans2 = INT_MIN;
        int inx2;
        for(int i=0;i<n;i++)
        {
            if(ar[i] > ans2)
            {
                ans2 = ar[i];
                inx2 = i;
            }
        }
        if(inx1 > inx2)
        {
            cout<<inx2<<" "<<inx1<<endl;
        }
        else
        {
            cout<<inx1<<" "<<inx2<<endl;
        }
    }
    return 0;
}