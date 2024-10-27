#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n;
    cin>>n;
    vector<int> v;
    while(n!=0)
    {
        v.push_back(n%10);
        n/=10;
    }
    int cnt=0;
    for(int val:v)
    {
        if(val==7 || val==4)
        {
            cnt++;
        }
    }
    if(cnt==4 || cnt==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}