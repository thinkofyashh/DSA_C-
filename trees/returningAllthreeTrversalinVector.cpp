 #include<bits/stdc++.h>
void inOrderTraversal(vector<int>&inOrder,TreeNode*node){
    if(node==nullptr) return;
    inOrderTraversal(inOrder,node->left);
    inOrder.push_back(node->data);
    inOrderTraversal(inOrder,node->right);
}
void preOrderTraversal(vector<int>&preOrder,TreeNode*node){
     if(node==nullptr) return;
      preOrder.push_back(node->data);
    preOrderTraversal(preOrder,node->left);
    preOrderTraversal(preOrder,node->right);

}
void postOrderTraversal(vector<int>&postOrder,TreeNode*node){
     if(node==nullptr) return;
    postOrderTraversal(postOrder,node->left);
    postOrderTraversal(postOrder,node->right);
      postOrder.push_back(node->data);

}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>> ans;
    if(root==nullptr) return ans;
    vector<int>inOrder;
    inOrderTraversal(inOrder,root);
    ans.push_back(inOrder);
    vector<int>preOrder;
    preOrderTraversal(preOrder,root);
    ans.push_back(preOrder);
    vector<int>postOrder;
    postOrderTraversal(postOrder,root);
    ans.push_back(postOrder);
    return ans;

}
