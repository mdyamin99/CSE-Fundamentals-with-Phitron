class Solution {
public:
    TreeNode* convert(vector<int> a,int n,int l, int r)
    {
        if(l > r) return NULL;
        int mid = (l+r)/2;
        TreeNode* root = new TreeNode(a[mid]);
        TreeNode* leftRoot = convert(a,n,l,mid-1);
        TreeNode* rightRoot = convert(a,n,mid+1,r);
        root->left=leftRoot;
        root->right=rightRoot;
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convert(nums,nums.size(),0,nums.size()-1);
    }
};