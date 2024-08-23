#include <bits/stdc++.h> 
vector<int> reverseLevelOrder(TreeNode<int> *root){
    vector<int> v;
    queue<TreeNode<int>*> q;
    if(root) q.push(root);
    while (!q.empty()) {
      TreeNode<int>* node = q.front();
      q.pop();
      v.push_back(node->val);
      if (node->left) q.push(node->left);
      if (node->right) q.push(node->right);
    }
    reverse(v.begin(),v.end());
    return v;
}