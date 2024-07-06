#include<bits/stdc++.h>
using namespace std;

int fun(int ar[],int n)
{
    int i=0,j=n-1;
    int ans=1;
    while(i<j)
    {
        if(ar[i]!=ar[j])
        {
            ans=0;
        }
        i++;
        j--;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int ar[n];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int a=fun(ar,n);
    if(a==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}