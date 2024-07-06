#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s;
    cin>>s;

    if(s>='A' && s<='Z')
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
    }
    else if(s>='a' && s<='z')
    {
        cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
    }
    else
    {
        cout<<"IS DIGIT"<<endl;
    }
    return 0;
}