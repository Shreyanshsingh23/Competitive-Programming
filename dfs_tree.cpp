vector<int> v;


    int dfs(TreeNode* root)
    {
    if(!root) return -1;


        if(!root->left && !root->right)
        {
            v.push_back(1);
            return 1;
        }
        int l=dfs(root->left);
        int r=dfs(root->right);
        if(l==r and l!=-1)
        {
            v.push_back(l+r+1);
            return l+r+1;
        }
        return -1;
    }
    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        dfs(root);
        sort(ve.begin(),ve.end());
        if(k>v.size()) return -1;
        return v[v.size()-k];
    }
