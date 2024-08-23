class Solution {
public:
    vector<int> v;
    void unival(TreeNode* root,int rr)
    {
        if(root==NULL) return;
        if(rr!=root->val)
        {
            v.push_back(root->val);
        }
        unival(root->left,rr);
        unival(root->right,rr);
    }
    bool isUnivalTree(TreeNode* root) {
        unival(root,root->val);
        return v.size()==0;
    }
};