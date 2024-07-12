#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    queue<int> q;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    int flag=0;
    if(st.size()!=q.size())
    {
        flag=0;
    }
    else
    {
        while(!st.empty())
        {
            if(st.top()!=q.front())
            {
                flag=0;
            }
            else
            {
                flag=1;
            }
            st.pop();
            q.pop();
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}