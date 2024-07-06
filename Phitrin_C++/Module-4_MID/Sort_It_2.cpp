#include<bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{
    int *ar =new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    return ar;
}

int main()
{
    int n;
    cin>>n;
    int *a=sort_it(n);
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}