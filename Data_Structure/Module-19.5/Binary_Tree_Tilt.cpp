class Solution {
public:
    int sum=0;
    int fun(TreeNode* root){
        if(root==NULL) return 0;
        int left=fun(root->left);
        int right=fun(root->right);
        sum=sum+abs(left-right);
        return root->val+left+right;
    }
    int findTilt(TreeNode* root) {
        fun(root);
        return sum;
    }
};