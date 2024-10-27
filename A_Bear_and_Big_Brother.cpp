#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;
    int cnt=0;
    while(true)
    {
        a*=3;
        b*=2;
        cnt++;
        if(a>b)
        {
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}