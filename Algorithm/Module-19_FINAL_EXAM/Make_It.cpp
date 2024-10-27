#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int dp[100005];
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
    if(dp[a] != -1)
    {
        return dp[a];
    }
    bool op1 = ric(input,a*2);
    bool op2 = ric(input,a+3);
    return dp[a] = op1 || op2;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        memset(dp,-1,sizeof(dp));
        ll a;
        cin>>a;
        bool flag = ric(a,1);
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}