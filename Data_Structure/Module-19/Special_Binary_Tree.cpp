#include <bits/stdc++.h>
bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    if(root->left==NULL && root->right==NULL) return true;
    if(root->left==NULL || root->right==NULL) return false;
    bool l=isSpecialBinaryTree(root->left);
    bool r=isSpecialBinaryTree(root->right);
    if(l==false || r==false) return false;
    return true;
}