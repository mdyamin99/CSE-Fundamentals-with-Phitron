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

int size(Node* head)
{
    int count=0;
    Node* tmp=head;
    while(tmp != NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}

int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val1;
    while(true)
    {
        cin>>val1;
        if(val1==-1) break;
        insert_tail(head1,tail1,val1);
    }

    Node* head2 = NULL;
    Node* tail2 = NULL;
    int val2;
    while(true)
    {
        cin>>val2;
        if(val2==-1) break;
        insert_tail(head2,tail2,val2);
    }

    if(size(head1)==size(head2))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}