#include <bits/stdc++.h> 
int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*,int>> q;
    q.push({root,1});
    while(!q.empty())
    {
        pair<TreeNode<int>*,int> pr=q.front();
        TreeNode<int>* node=pr.first;
        int level=pr.second;
        q.pop();

        if(node->val == searchedValue)
        {
            return level;
        }

        if(node->left)
        {
            q.push({node->left,level+1});
        }
        if(node->right)
        {
            q.push({node->right,level+1});
        }
    }
}
