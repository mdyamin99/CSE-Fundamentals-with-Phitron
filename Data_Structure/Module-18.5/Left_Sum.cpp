#include <bits/stdc++.h> 
long long int sum(BinaryTreeNode<int>* root)
{
	long long int summ=0;
	if(root==NULL) return 0;
	queue<BinaryTreeNode<int>*> q;
	q.push(root);
	while(!q.empty())
	{
		BinaryTreeNode<int>* f=q.front();
		q.pop();
		if(f->left!=NULL)
		{
			summ+=f->left->data;
		}
		if(f->left) q.push(f->left);
		if(f->right) q.push(f->right);
	}
	return summ;
}

long long leftSum(BinaryTreeNode<int> *root)
{
    long long int s=sum(root);
	return s;
}