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


class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head=NULL;
    }

    int size()
    {
        Node* tmp = head;
        int cnt=0;
        while(tmp != NULL)
        {
            tmp=tmp->next;
            cnt++;
        }
        return cnt;
    }
    
    int get(int index) {
        int sz=0;
        Node* tmp=head;
        while(tmp != NULL)
        {
            if(sz==index)
            {
                return tmp->val;
            }
            sz++;
            tmp=tmp->next;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if(head==NULL)
        {
            head=newNode;
            return;
        }
        newNode->next=head;
        head=newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(head==NULL)
        {
            head=newNode;
            return;
        }
        Node* tmp = head;
        while(tmp->next != NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=newNode;
        tmp=tmp->next;
    }
    
    void addAtIndex(int index, int val) {
        Node* newNode = new Node(val);
        if(index > size())
        {
            return;
        }
        if(index==0)
        {
            addAtHead(val);
            return;
        }
        if(index==size())
        {
            addAtTail(val);
            return;
        }
        Node* tmp = head;
        for(int i=1;i<index;i++)
        {
            tmp=tmp->next;
        }
        newNode->next=tmp->next;
        tmp->next=newNode;
    }
    
    void deleteAtIndex(int index) {
        if(index >= size()) return;
        if(index==0)
        {
            Node* deleteNode = head;
            head=head->next;
            delete deleteNode;
            return;
        }
        Node* tmp = head;
        for(int i=1;i<index;i++)
        {
            tmp=tmp->next;
        }
        Node* deleteNode = tmp->next;
        tmp->next=tmp->next->next;
        delete deleteNode;
    }
};