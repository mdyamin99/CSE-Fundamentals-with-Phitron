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
    int a_cnt=0,d_cnt=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            a_cnt++;
        }
        if(s[i]=='D')
        {
            d_cnt++;
        }
    }
    if(a_cnt>d_cnt)
    {
        cout<<"Anton"<<endl;
    }
    else if(d_cnt>a_cnt)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}