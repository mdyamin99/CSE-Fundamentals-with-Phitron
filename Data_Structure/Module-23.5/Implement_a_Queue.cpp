#include <bits/stdc++.h> 
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
class Queue {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz=0;
    Queue() {
        
    }

    bool isEmpty() {
        if(sz==0) return true;
        else return false;
    }

    void enqueue(int data) {
        sz++;
        Node* newNode = new Node(data);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        tail=tail->next;
    }

    int dequeue() {
        if(head==NULL)
        {
            return -1;
        }
        sz--;
        Node* deleteNode = head;
        head=head->next;
        return deleteNode->val;
    }

    int front() {
        if(head==NULL)
        {
            return -1;
        }
        else
        {
            return head->val;
        }
    }
};