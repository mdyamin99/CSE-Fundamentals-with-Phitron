#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> q;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            if(q.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                cout<<q.top()<<endl;
            }
        }
        else if(a==2)
        {
            if(!q.empty())
            {
                q.pop();
            }
            if(q.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                cout<<q.top()<<endl;
            }
        }
        else if(a==0)
        {
            int v;
            cin>>v;
            q.push(v);
            cout<<q.top()<<endl;
        }
    }
    return 0;
}