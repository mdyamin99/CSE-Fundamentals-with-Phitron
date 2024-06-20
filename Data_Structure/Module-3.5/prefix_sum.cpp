#include<bits/stdc++.h>
using namespace std;

int* fun(int *ar,int n)
{
    int *pre=new int[n];
    pre[0]=ar[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=ar[i]+pre[i-1];
    }
    return pre;
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
    int *a=fun(ar,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}