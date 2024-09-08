class Solution {
public:
    vector<int> v;
    void min_val(TreeNode* root)
    {
        if(root==NULL) return;
        v.push_back(root->val);
        min_val(root->left);
        min_val(root->right);
    }
    int getMinimumDifference(TreeNode* root) {
        min_val(root);
        sort(v.begin(),v.end());
        int ans=abs(v[1]-v[0]);
        for(int i=2;i<v.size();i++)
        {
            ans=min(ans,abs(v[i]-v[i-1]));
        }
        return ans;
    }
};