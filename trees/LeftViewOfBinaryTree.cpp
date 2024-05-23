

void leftView(BinaryTreeNode<int>*node,int level,vector<int>&ans){
    if(node==nullptr) return;
    if(level==ans.size()){
        ans.push_back(node->data);
    }
    leftView(node->left,level+1, ans);
    leftView(node->right,level+1,ans);
    return;
}

vector<int> printLeftView(BinaryTreeNode<int>* root) {
    // Write your code here.
    vector<int>ans;
    if(root==nullptr) return ans;
    leftView(root,0,ans);
    return ans;

}
