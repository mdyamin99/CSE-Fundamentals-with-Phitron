int height(TreeNode<int> *root)
{
    if(root==NULL) return 0;
    int l=height(root->left);
    int r=height(root->right);
    return max(l,r)+1;
}
int heightOfBinaryTree(TreeNode<int> *root)
{
	int ans=height(root);
    return ans;
}
