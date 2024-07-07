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
    int sise()
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
    myStack st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}