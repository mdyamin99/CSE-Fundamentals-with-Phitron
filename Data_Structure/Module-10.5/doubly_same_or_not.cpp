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

void same_or_not(Node* head, Node* head1)
{
    int flag=0;
    Node* tmp = head;
    Node* tmp1 = head1;

    if(size(tmp)==1 && size(tmp1)==1)
    {
        if(tmp->val == tmp1->val)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if(size(tmp) == size(tmp1))
    {
        while(tmp != NULL)
        {
            if(tmp->val != tmp1->val)
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
            tmp=tmp->next;
            tmp1=tmp1->next;
        }
    }
    if(size(tmp) != size(tmp1))
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

    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val1;
    while(true)
    {
        cin>>val1;
        if(val1==-1) break;
        insert_at_tail(head1,tail1,val1);
    }
    same_or_not(head,head1);
    return 0;
}