#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;
    string s;
    cin>>s;
    while(x--)
    {
        for(int i=1;i<n;i++)
        {
            if(s[i]=='G')
            {
                swap(s[i],s[i-1]);
                i++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}