class Solution {
public:
    void sum(TreeNode* root,int low,int high,int &ans)
    {
        if(root==NULL) return;
        if(root->val >= low && root->val <= high)
        {
            ans+=root->val;
        }
        sum(root->left,low,high,ans);
        sum(root->right,low,high,ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int ans=0;
        sum(root,low,high,ans);
        return ans;
    }
};