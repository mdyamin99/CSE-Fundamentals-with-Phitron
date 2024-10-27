#include<bits/stdc++.h>
using namespace std;

long long int dp[10005];
long long int rec(int a,int arr[])
{
    if(a<0) return 0;
    if(dp[a] != -1)
    {
        return dp[a];
    }
    long long int op1 = arr[a]+rec(a-2,arr);
    long long int op2 = rec(a-1,arr);
    return dp[a]=max(op1,op2);
}

int main()
{
    int t;
    cin>>t;
    int cnt=1;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
        }
        cout<<"Case "<<cnt<<": "<<rec(a-1,arr)<<endl;
        cnt++;
    }
    return 0;
}