#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int> st;
        int n;
        cin>>n;
        while(n--)
        {
            int x;
            cin>>x;
            st.insert(x);
        }
        for(auto a:st)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}