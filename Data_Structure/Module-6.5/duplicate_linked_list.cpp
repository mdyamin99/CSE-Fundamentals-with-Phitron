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

int main()
{
    Node* head = NULL;
    int val;
    int cnt[101]={0};
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,val);
        cnt[val]++;
    }
    int flag=0;
    for(int i=0;i<101;i++)
    {
        if(cnt[i]>1)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}