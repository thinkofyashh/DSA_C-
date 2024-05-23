bool checking(BinaryTreeNode<int>*node1,BinaryTreeNode<int>*node2){
    if(node1==nullptr || node2==nullptr) return (node1==node2);
    if(node1->data!=node2->data) return false;
    bool left=checking(node1->left,node2->right);
    bool right=checking(node1->right,node2->left);
    if(!left || !right) return false;
    return true;
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.    
    if(root==nullptr) return true;
    return checking(root->left,root->right);
}
