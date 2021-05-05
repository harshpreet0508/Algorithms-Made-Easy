class Solution {
public:
    void helper(TreeNode *root,vector<int>&v,int l,int *m)
    {
        if(root==NULL)
            return;
        
        if(*m < l)
        {
            v.push_back(root->val);
            *m = l;
        }
        
        helper(root->right, v, l+1, m);
        
        helper(root->left, v, l+1, m);
    }
    vector<int> rightSideView(TreeNode* root) {
        
        vector<int>v;
        
        int m = 0;
        
        helper(root, v, 1, &m);
        
        return v;
    }
};
