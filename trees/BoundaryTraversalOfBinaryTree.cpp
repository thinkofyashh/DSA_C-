#include <bits/stdc++.h>

bool isLeaf(TreeNode<int>* node){
    if(node->left==nullptr && node->right==nullptr) return true;
    return false; 
}
void leftSystem(TreeNode<int>*node,vector<int>&ans){
    TreeNode<int>*curr=node;
    while(curr){
        if(!isLeaf(curr)) ans.push_back(curr->data);
        if(curr->left){
          curr=curr->left;
        }else{
            curr=curr->right;
        }
    }
}

void rightSystem(TreeNode<int>*node,vector<int>&ans){
    TreeNode<int>*curr=node;
    stack<TreeNode<int>*>st;
    while(curr){
        if(!isLeaf(curr)) st.push(curr);
        if(curr->right) curr=curr->right;
        else curr=curr->left;
    }
    while(!st.empty()){
        TreeNode<int>*current=st.top();
        st.pop();
        ans.push_back(current->data);
    }
}

void leafSystem(TreeNode<int>*node,vector<int>&ans){
    TreeNode<int>*curr=node;
    if(isLeaf(curr)) ans.push_back(curr->data);
    if(curr->left) leafSystem(curr->left,ans);
    if(curr->right) leafSystem(curr->right,ans);
}

vector<int> traverseBoundary(TreeNode<int> *root)
{
	// Write your code here.
    vector<int>ans;
    if(root==nullptr) return ans;
    if(!isLeaf(root)) ans.push_back(root->data);
    leftSystem(root->left,ans);
    leafSystem(root,ans);
    rightSystem(root->right,ans);
    return ans;
}
