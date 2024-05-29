#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ar[n+1];
    cin>>ar;
    sort(ar,ar+n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i];
    }
    return 0;
}