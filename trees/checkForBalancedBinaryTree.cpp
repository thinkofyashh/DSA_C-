int dfsHeight(TreeNode<int>*node){
    if(node==nullptr) return 0;
    int leftside=dfsHeight(node->left);
    if(leftside==-1) return -1;
    int rightside=dfsHeight(node->right);
    if(rightside==-1) return -1;
    if(abs(leftside-rightside)>1) return -1;
    return 1+max(leftside,rightside);
    }
bool isBalancedBT(TreeNode<int>* root){
    // Write your code here.
    return dfsHeight(root)!=-1;

}
