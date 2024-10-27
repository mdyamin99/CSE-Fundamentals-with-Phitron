#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    int ar[n];
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        mx=max(mx,ar[i]);
    }
    int x=mx;
    int y=x-1;
    int cnt=0;
    while(true)
    {
        k-=y;
        y--;
        if(k<=0)
        {
            break;
        }
        else if(k>=0)
        {
            cnt++;
        }
    }
    if(cnt>mx)
    {
        cout<<"Hablu"<<endl;
    }
    else
    {
        cout<<"Dablu"<<endl;
    }
    return 0;
}