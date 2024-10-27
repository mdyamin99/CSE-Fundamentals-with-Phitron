#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}