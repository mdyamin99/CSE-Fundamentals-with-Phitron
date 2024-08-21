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
        stack<char> st1;
        stack<char> st2;
        for(char c:s)
        {
            if(c=='0')
            {
                st1.push(c);
            }
            else
            {
                st2.push(c);
            }
        }
        if(st1.size()==st2.size())
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