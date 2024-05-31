#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=0;
        for(int i=0;i<=2;i++)
        {
            a+=s[i]-'0';
        }
        int b=0;
        for(int i=3;i<=5;i++)
        {
            b+=s[i]-'0';
        }
        if(a==b)
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