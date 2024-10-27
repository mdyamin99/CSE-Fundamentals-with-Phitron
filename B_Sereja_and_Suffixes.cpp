#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    vector<int> v(n+1);
    set<int> st;
    for(int i=n;i>=1;i--)
    {
        st.insert(a[i]);
        v[i]=st.size();
    }
    while(m--)
    {
        int pos;
        cin>>pos;
        cout<<v[pos]<<endl;
    }
    return 0;
}