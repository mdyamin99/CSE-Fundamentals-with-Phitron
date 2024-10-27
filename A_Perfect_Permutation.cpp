#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2 != 0)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    vector<int> v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i);
    }
    for(int i=0;i<n-1;i+=2)
    {
        swap(v[i],v[i+1]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}