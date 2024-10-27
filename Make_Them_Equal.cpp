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
        int n,k;
        cin>>n>>k;
        string s1,s2;
        cin>>s1>>s2;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                sum++;
            }
        }
        if(sum<=k)
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