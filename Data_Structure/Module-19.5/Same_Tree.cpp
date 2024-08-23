class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
        {
            return true;
        }
        else if(p==NULL || q==NULL)
        {
            return false;
        }
        if(p->val != q->val)
        {
            return false;
        }
        bool p_tree=isSameTree(p->left,q->left);
        bool q_tree=isSameTree(p->right,q->right);
        if(p_tree==false || q_tree==false) return false;
        return true;
    }
};