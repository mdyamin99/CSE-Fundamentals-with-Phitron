#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    long long int x;
    cin>>x;
    long long int indx=-1;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==x)
        {
            indx=i;
        }
    }
    cout<<indx<<endl;
    return 0;
}