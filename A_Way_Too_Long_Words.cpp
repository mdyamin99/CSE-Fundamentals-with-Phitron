#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        if(n<=10)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<s[0]<<n-2<<s[n-1]<<endl;
        }
    }
    return 0;
}