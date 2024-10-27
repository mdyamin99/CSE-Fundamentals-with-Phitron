#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool ric(ll input,ll a)
{
    if(a > input)
    {
        return false;
    }
    if(a==input)
    {
        return true;
    }
    return ric(input,a*10) || ric(input,a*20);
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        ll a;
        cin>>a;
        bool flag = ric(a,1);
        if(flag)
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