#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int ar[n];
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==1)
        {
            flag=true;
        }
    }
    if(flag)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }
    return 0;
}