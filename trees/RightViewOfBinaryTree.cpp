void rightView(BinaryTreeNode<int>*node,int level,vector<int>&ans){
    if(node==nullptr) return;
    if(level==ans.size()){
        ans.push_back(node->data);
    }
    rightView(node->right,level+1, ans);
    rightView(node->left,level+1,ans);
    return ;
}
vector<int> printRightView(BinaryTreeNode<int>* root) {
    // Write your code here.
    vector<int>ans;
    if(root==nullptr) return ans;
    rightView(root,0,ans);
    return ans;
}
