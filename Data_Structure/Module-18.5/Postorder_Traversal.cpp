vector<int> v;
void postorder(TreeNode* root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    v.push_back(root->data);
}
vector<int> postorderTraversal(TreeNode *root)
{
    v.clear();
    postorder(root);
    return v;
}