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

void insert_at_tail(Node* &head,int v)
{
    Node* newnode = new Node(v);
    if(head==NULL)
    {
        head=newnode;
        return;
    }

    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newnode;
}

void insert_at_position(Node* head,int pos,int v)
{
    Node* newnode = new Node(v);
    Node* tmp = head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<endl<<"Invalid";
            return;
        }
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
}

void insert_at_head(Node* &head,int v)
{
    Node* newnode = new Node(v);
    newnode->next=head;
    head=newnode;
}

void print_linked_list(Node* head)
{
    cout<<endl;
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}

int main()
{
    Node* head = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,val);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int pos,v;
        cin>>pos>>v;
        if(pos==0)
        {
            insert_at_head(head,v);
        }
        else
        {
            insert_at_position(head,pos,v);
        }
        print_linked_list(head);
    }
    return 0;
}