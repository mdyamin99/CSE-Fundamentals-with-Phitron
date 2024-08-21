#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    queue<string> q;
    while(t--)
    {
        int op;
        cin>>op;
        if(op==0)
        {
            string s;
            cin>>s;
            q.push(s);
        }
        else if(op==1)
        {
            int s=q.size();
            if(s==0)
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    return 0;
}