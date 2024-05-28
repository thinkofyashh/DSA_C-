 int widthOfBinaryTree(TreeNode* root) {
        if(root==nullptr) return 0;
        int ans=0;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            int mmin=q.front().second;
            int first,last;
            for(int i=0;i<size;i++){
                int curr_id=q.front().second-mmin;
                TreeNode*node=q.front().first;
                q.pop();
                if(i==0) first=curr_id;
                if(i==size-1)last=curr_id;
                if(node->left) q.push({node->left,(long long)2*curr_id+1});
                if(node->right) q.push({node->right,(long long)2*curr_id+2});
            }
            ans=max(ans,last-first+1);
        }
        return ans;   
    }
