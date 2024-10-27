#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        vector<int> v(b);
        vector<bool> ache(a+1,false);

        for (int i=0;i<a;i++)
        {
            cin>>v[i];
            if(v[i]>=1 && v[i]<=a)
            {
                ache[v[i]] = true;
            }
        }
        int miss=0;
        for (int i=1;i<=a;i++)
        {
            if (!ache[i])
            {
                miss++;
            }
        }
        if (miss<=b)
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