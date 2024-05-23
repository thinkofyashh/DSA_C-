
bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    // Write your code here. 	 
    if(root1==nullptr || root2==nullptr) return (root1==root2);
    if(root1->data!=root2->data) return false;
    bool left=identicalTrees(root1->left,root2->left);
   bool right= identicalTrees(root1->right,root2->right);
    if(!left|| !right) return false;
    return true;
}
