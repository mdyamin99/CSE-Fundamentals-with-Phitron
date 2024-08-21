int leaf(BinaryTreeNode<int>* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else
    {
        int l=leaf(root->left);
        int r=leaf(root->right);
        return l+r;
    }
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    int a=leaf(root);
    return a;
}