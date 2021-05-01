class Solution {
public:
    int s=0;
    int maxDepth(TreeNode* root) {
        
        if(root == NULL)
            return 0;
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
        
    }
    
    void sum(TreeNode *root,int cur,int max)
    {
        if(root != NULL)
        {
            if(cur == max)
                s+=root->val;
        
            sum(root->left,cur+1,max);
            sum(root->right,cur+1,max);
        }
    }
    int deepestLeavesSum(TreeNode* root) {
        
        int m = maxDepth(root);
        
        sum(root,1,m);
        return s;
        
    }
};
