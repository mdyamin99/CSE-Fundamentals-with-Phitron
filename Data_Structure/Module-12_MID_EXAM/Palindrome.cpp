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

void palindrome(Node* head, Node* tail)
{
    Node* i=head;
    Node* j=tail;
    int flag=1;
    while(i != j && i->next != j)
    {
        if(i->val != j->val)
        {
            flag=0;
            break;
        }
        i=i->next;
        j=j->prev;
    }
    if(i->val != j->val)
    {
        flag=0;
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
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
        insert_at_tail(head,tail,val);
    }
    palindrome(head,tail);
    return 0;
}