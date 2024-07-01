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

void size_linked_list(Node* head)
{
    int ans=0;
    Node* tmp = head;
    while(tmp != NULL)
    {
        ans++;
        tmp=tmp->next;
    }
    cout<<ans<<endl;
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
    size_linked_list(head);
    return 0;
}