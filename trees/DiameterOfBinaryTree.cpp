int maxDepth(TreeNode<int>*node){
    if(node==nullptr) return 0;
    int lefth=maxDepth(node->left);
    int right=maxDepth(node->right);
    return 1+max(lefth,right);
}
 int  findMax(TreeNode<int>*node,int& maxi){
        if(node==nullptr) return 0;
        int leftSide=maxDepth(node->left);
        int rightSide=maxDepth(node->right);
        maxi=max(maxi,leftSide+rightSide);
        findMax(node->left,maxi);
        findMax(node->right,maxi);
        return maxi;
    }
int diameterOfBinaryTree(TreeNode<int> *root){
	// Write Your Code Here.
    int maxi=0;
    return findMax(root, maxi);

}
// optimal approach 
int maxDepth(TreeNode<int>*node,int& maxi){
    if(node==nullptr) return 0;
    int lefth=maxDepth(node->left,maxi);
    int right=maxDepth(node->right,maxi);
    maxi=max(maxi,lefth+right);
    return 1+max(lefth,right);
}

int diameterOfBinaryTree(TreeNode<int> *root){
	// Write Your Code Here.
    int maxi=0;
    int maxH= maxDepth(root, maxi);
    return maxi;

}
