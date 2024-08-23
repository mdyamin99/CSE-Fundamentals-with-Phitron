class Solution {
public:
    vector<int> v1;
    vector<int> v2;
    void leaf1(TreeNode* root1)
    {
        if(root1==NULL) return;
        if(root1->left==NULL && root1->right==NULL)
        {
            v1.push_back(root1->val);
        }
        leaf1(root1->left);
        leaf1(root1->right);
    }

    void leaf2(TreeNode* root2)
    {
        if(root2==NULL) return;
        if(root2->left==NULL && root2->right==NULL)
        {
            v2.push_back(root2->val);
        }
        leaf2(root2->left);
        leaf2(root2->right);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        leaf1(root1);
        leaf2(root2);
        return v1==v2;
    }
};