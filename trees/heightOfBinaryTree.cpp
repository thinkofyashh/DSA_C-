// recursive way 
int depth(TreeNode<int>*node){
    if(node==nullptr){
        return 0;
    }
    int leftDepth=depth(node->left);
    int rightDepth=depth(node->right);

    return 1+max(leftDepth,rightDepth);

}
int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    return depth(root);
}

// level order traversing 

#include<bits/stdc++.h>
int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    queue<TreeNode<int>*>q;
    int depth=0;
    q.push(root);
    while(!q.empty()){
        depth++;
        int size=q.size();
        for(int i=0;i<size;i++){
        TreeNode<int>* node=q.front();
        q.pop();
        if(node->left) q.push(node->left);
        if(node->right) q.push(node->right);
        }
    }
    return depth;
}
