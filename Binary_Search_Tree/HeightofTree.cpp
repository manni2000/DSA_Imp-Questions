
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        
        int ls= maxDepth(root->left);
        int rs= maxDepth(root->right);
        
        return max(ls,rs)+1;
    }