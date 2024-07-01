#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void max_value(Node* head)
{
    Node* tmp = head;
    int mx=INT_MIN;
    int mn=INT_MAX;
    while(tmp != NULL)
    {
        if(tmp->val > mx)
        {
            mx=tmp->val;
        }
        if(tmp->val < mn)
        {
            mn=tmp->val;
        }
        tmp=tmp->next;
    }
    cout<<mx-mn<<endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
    }
    max_value(head);
    return 0;
}