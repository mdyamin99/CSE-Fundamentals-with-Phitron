#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q1.push(x);
    }
    queue<int> q2;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        q2.push(y);
    }
    queue<int> mq;
    mq=q1;
    while(!q2.empty())
    {
        mq.push(q2.front());
        q2.pop();
    }
    while(!mq.empty())
    {
        cout<<mq.front()<<" ";
        mq.pop();
    }
    return 0;
}