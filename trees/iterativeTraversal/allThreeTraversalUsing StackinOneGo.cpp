#include<bits/stdc++.h>
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>>ans ;
    stack<pair<TreeNode*,int>> st;
    st.push({root,1});
    vector<int>preOrder;
    vector<int>inOrder;
    vector<int>postOrder;
    while(!st.empty()){
        auto it = st.top();
        st.pop();
        if(it.second==1){
            preOrder.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left){
                st.push({it.first->left,1});
            }
        }
        else if(it.second==2){
            inOrder.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right){
                st.push({it.first->right,1});
            }
        }
        else{
            postOrder.push_back(it.first->data);
        }
    }
    ans.push_back(inOrder);
    ans.push_back(preOrder);
    ans.push_back(postOrder);
    return ans;

}
