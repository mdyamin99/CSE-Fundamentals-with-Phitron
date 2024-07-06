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

void search_value(Node* head, int x)
{
    Node* tmp = head;
    int flag=0;
    int ans=0;
    while(tmp != NULL)
    {
        if(tmp->val == x)
        {
            flag=1;
            break;
        }
        ans++;
        tmp=tmp->next;
    }
    if(flag==1)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
}

int main()
{
    
    int t;
    cin>>t;
    while(t--)
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
        int x;
        cin>>x;
        search_value(head,x);
    }
    return 0;
}