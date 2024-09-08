class Solution {
public:
    int size(ListNode* head)
    {
        ListNode* tmp=head;
        int cnt=0;
        while(tmp != NULL)
        {
            tmp=tmp->next;
            cnt++;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        int sz=size(head);
        ListNode* tmp=head;
        for(int i=0;i<sz/2;i++)
        {
            tmp=tmp->next;
        }
        return tmp;
    }
};