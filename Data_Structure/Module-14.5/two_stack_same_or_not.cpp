#include<bits/stdc++.h>
using namespace std;

class myStack
{
    public:
        vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if(v.size()==0) return true;
        else return false;
    }
};

int main()
{
    myStack st1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st1.push(x);
    }
    myStack st2;
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        st2.push(y);
    }
    int flag=0;
    if(st1.size()!=st2.size())
    {
        flag=0;
    }
    else
    {
        while(!st1.empty())
        {
            if(st1.top()!=st2.top())
            {
                flag=0;
            }
            else
            {
                flag=1;
            }
            st1.pop();
            st2.pop();
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