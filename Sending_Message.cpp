#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    while(cin>>s1>>s2)
    {
        int x=0,y=0;
        while(x<s1.size()&&y<s2.size())
        {
            if (s1[x] == s2[y])
            {
                y++;
            }
            x++;
        }
        if(y==s2.size())
        {
            cout<<"Possible"<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        }
    }
    return 0;
}