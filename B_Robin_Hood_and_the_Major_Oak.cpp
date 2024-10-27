#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        long long k = n-m;
        long long sum1 = n*(n+1)/2;
        long long sum2 = k*(k+1)/2;
        long long sum = sum1-sum2;
        if(sum %2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}