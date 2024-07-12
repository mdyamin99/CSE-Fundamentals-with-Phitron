#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

class myStack
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node* newnode=new Node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=tail->next;
    }
    void pop()
    {
        sz--;
        Node* deletenode=tail;
        tail=tail->prev;
        if(tail==NULL) head=NULL;
        delete deletenode;
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }
};

class myQueue
{
    public:
        Node* head=NULL;
        Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        Node* newnode=new Node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=tail->next;
    }
    void pop()
    {
        sz--;
        Node* deletenode=head;
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
            delete deletenode;
            return;
        }
        head->prev=NULL;
        delete deletenode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if(sz==0) return true;
        else return false;
    }
};

int main()
{
    int n,m;
    cin>>n>>m;
    myStack st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    myQueue q;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        q.push(x);
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
                break;
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