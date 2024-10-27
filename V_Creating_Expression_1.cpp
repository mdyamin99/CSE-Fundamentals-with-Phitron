#include<bits/stdc++.h>
using namespace std;

bool sub_set(long long int n,long long int ar[],long long int s)
{
    if(n==0)
    {
        if(s==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if(ar[n-1] <= s)
    {
        bool op1 = sub_set(n-1,ar,s-ar[n-1]);
        bool op2 = sub_set(n-1,ar,s);
        return op1 || op2;
    }
    else
    {
        bool op2 = sub_set(n-1,ar,s);
        return op2;
    }
}

int main()
{
    long long int n,x;
    cin>>n>>x;
    long long int ar[n];
    long long int sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    long long int s1 = (sum+x)/2;
    if(s1 < 0)
    {
        cout<<"NO"<<endl;
    }
    else if(x > sum || (x+sum)%2==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if(sub_set(n,ar,s1))
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