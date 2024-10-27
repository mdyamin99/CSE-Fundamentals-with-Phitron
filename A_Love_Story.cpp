#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        string s2 = "codeforces";
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=s2[i])
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}