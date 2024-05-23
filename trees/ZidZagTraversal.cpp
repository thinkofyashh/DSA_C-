// leetcode 
 vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==nullptr) return ans;
        queue<TreeNode*>q;
        q.push(root);
        int leftToRight=true;
        while(!q.empty()){
            int size=q.size();
                vector<int>level(size);
            for(int i=0;i<size;i++){
            TreeNode*node=q.front();
            q.pop();
        
            int index=leftToRight ? i :(size-1-i);
            level[index]=node->val;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            }
            leftToRight=!leftToRight;
            ans.push_back(level);
        }
        return ans;
        
    }

// code studio 
#include<bits/stdc++.h>
vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
         vector<int>ans;
        if(root==nullptr) return ans;
        queue<BinaryTreeNode<int>*>q;
        q.push(root);
        int leftToRight=true;
        while(!q.empty()){
            int size=q.size();
                vector<int>level(size);
            for(int i=0;i<size;i++){
            BinaryTreeNode<int>*node=q.front();
            q.pop();
        
            int index=leftToRight ? i :(size-1-i);
            level[index]=node->data;
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            }
            leftToRight=!leftToRight;
            for(auto it:level){
                ans.push_back(it);
            }
        }
        return ans;
        
}
