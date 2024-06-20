#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    while(q--)
    {
        int a;
        cin>>a;
        int ans=0;
        for(int val:v)
        {
            if(val==a)
            {
                ans=1;
            }
        }
        if(ans==1)
        {
            cout<<"found"<<endl;
        }
        else
        {
            cout<<"not found"<<endl;
        }
    }
    return 0;
}