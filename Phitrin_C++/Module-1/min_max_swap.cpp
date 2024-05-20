#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

int main()
{
    // int a,b,c,d;
    // cin>>a>>b>>c>>d;
    
    //int c=min(a,b);
    //cout<<c<<endl;
    //int d=max(a,b);
    //cout<<d<<" "<<c<<endl;
    //int mn=min({a,b,c,d});
    //cout<<mn<<endl;
    //int mx=max({a,b,c,d});
    //cout<<mx<<" "<<mn<<endl;

    int a,b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}