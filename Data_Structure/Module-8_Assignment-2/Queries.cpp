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

void insert_at_tail(Node *&head, int v)
{
    Node* newnode = new Node(v);

    if(head==NULL)
    {
        head=newnode;
        return;
    }

    Node*tmp = head;

    while(tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    // tmp akhon notun node e
    tmp->next=newnode;
}

void insert_at_head(Node* &head,int v)
{
    Node* newnode = new Node(v);

    newnode->next=head;
    head=newnode;
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

void delete_from_position(Node* head,int pos)
{
    Node* tmp = head;
    if(size(tmp)<=pos)
    {
        return;
    }
    for(int i=1;i<pos;i++)
    {
        tmp=tmp->next;
    }
    Node* deletenode = tmp->next;
    tmp->next=tmp->next->next;
    delete deletenode;
}

void delete_head(Node* &head)
{
    if(head==NULL)
    {
        return;
    }
    Node* deletenode = head;
    head=head->next;
    delete deletenode;
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

int main()
{
    int t;
    cin>>t;
    Node* head = NULL;
    while(t--)
    {
        int op,v;
        cin>>op>>v;
        if(op==0)
        {
            insert_at_head(head,v);
        }
        else if(op==1)
        {
            insert_at_tail(head,v);
        }
        else if(op==2)
        {
            if(v==0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head,v);
            }
        }
        print_linked_list(head);
    }
    
    return 0;
}