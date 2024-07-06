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

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=tail->next;
}

int size(Node* head)
{
    int cnt=0;
    Node* tmp = head;
    while(tmp != NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}

void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void print_reverse(Node* tail)
{
    Node* tmp = tail;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}

void insert_head(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void insert_position(Node* head,int pos,int val)
{
    Node* newnode = new Node(val);
    Node* tmp = head;
    if(pos > size(tmp))
    {
        cout<<"Invalid"<<endl;
        return;
    }
    for( int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newnode->next=tmp->next;
    tmp->next=newnode;
    newnode->next->prev=newnode;
    newnode->prev=tmp;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int t;
    cin>>t;
    while(t--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos == 0)
        {
            insert_head(head,tail,val);
        }
        else if(pos == size(head))
        {
            insert_at_tail(head,tail,val);
        }
        else
        {
            insert_position(head,pos,val);
        }
        print_reverse(tail);
        print_linked_list(head);
    }
    return 0;
}