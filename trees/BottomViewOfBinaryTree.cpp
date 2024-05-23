#include <bits/stdc++.h>
vector<int> bottomView(TreeNode<int> * root){
    // Write your code here.
    vector<int>ans;
    if(root==nullptr) return ans;
    map<int,int>mp;
    queue<pair<TreeNode<int>*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto it =q.front();
        q.pop();
        TreeNode<int>* node=it.first;
        int line=it.second;
        mp[line]=node->data;
        if(node->left) q.push({node->left,line-1});
        if(node->right) q.push({node->right,line+1});
    }
    for(auto it:mp){
        ans.push_back(it.second);
    }
    return ans;
}
