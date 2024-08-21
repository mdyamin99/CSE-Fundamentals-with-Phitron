vector<int> v;
void indor(TreeNode* root)
{
    if(root==NULL) return;
    indor(root->left);
    v.push_back(root->data);
    indor(root->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    v.clear();
    indor(root);
    return v;
}