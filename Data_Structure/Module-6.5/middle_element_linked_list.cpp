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

void middle_element(Node* head , int v)
{
    Node* tmp = head;
    int dif=v/2;
    if(v%2!=0)
    {
        for(int i=0;i<dif;i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<endl;
    }
    else
    {
        for(int i=0;i<dif-1;i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
}

int main()
{
    Node* head = NULL;
    int val;
    int ans=0;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        ans++;
        insert_at_tail(head,val);
    }
    middle_element(head,ans);
    return 0;
}