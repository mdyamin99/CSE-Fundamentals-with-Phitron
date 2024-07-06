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

void middle_element(Node* head, int v)
{
    Node* tmp=head;
    int mid=v/2;
    if(v%2!=0)
    {
        for(int i=0;i<mid;i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<endl;
    }
    else
    {
        for(int i=0;i<mid-1;i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
}

int size(Node* head)
{
    int count=0;
    Node* tmp = head;
    while(tmp != NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
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
    int cnt=size(head);
    middle_element(head,cnt);
    return 0;
}