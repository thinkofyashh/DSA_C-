 vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==nullptr) return ans;
        stack<TreeNode*>s;
        TreeNode* node=root;
        while(true){
            if(node!=nullptr){
                s.push(node);
                node=node->left;
            }else{
                if(s.empty()==true) break;
                node=s.top();
                s.pop();
                ans.push_back(node->val);
                node=node->right;
            }
        }
        return ans;
        

    }
