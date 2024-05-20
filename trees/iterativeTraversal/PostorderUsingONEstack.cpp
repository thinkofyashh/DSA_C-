vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr=root;
        stack<TreeNode*>st;
        while(!st.empty() || curr!=nullptr){
            if(curr!=nullptr){
                st.push(curr);
                curr=curr->left;
            }
            else{
                TreeNode*temp=st.top()->right;
                if(temp==nullptr){
                    temp=st.top();
                    st.pop();
                    ans.push_back(temp->val);
                    while(!st.empty()&& temp==st.top()->right){
                        temp=st.top();
                        st.pop();
                        ans.push_back(temp->val);
                    }

                }else{
                    curr=temp;
                }
            }
        }
        return ans;
    }
