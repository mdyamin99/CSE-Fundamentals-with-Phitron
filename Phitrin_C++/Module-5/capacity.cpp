#include<bits/stdc++.h>
using namespace std;

int main()
{
    // string s="Hello";
    // cout<<s.size()<<endl;

    // string s="Hello";
    // cout<<s.capacity()<<endl;
    // s="efidkljiwifhjdihfjwdkcjdksfhwefjlsdfjo";
    // cout<<s.capacity()<<endl;

    // string s="Hello";
    // cout<<s<<endl;
    // s.clear();
    // cout<<s<<endl;

    // string s="Hello";
    // s.clear();
    // if(s.empty()==true) cout<<"Empty"<<endl;
    // else cout<<"Not Empty"<<endl;

    string s;
    cin>>s;
    s.resize(5);
    cout<<s<<endl;
    s.resize(11,'X');
    cout<<s<<endl;

    return 0;
}