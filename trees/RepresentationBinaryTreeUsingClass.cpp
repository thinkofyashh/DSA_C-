#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;
    Node(int val){
        this->data=val;
        this->left=nullptr;
        this->right=nullptr;
    }
    Node(int val,Node*left,Node*right){
        this->data=val;
        this->left=left;
        this->right=right;
    }
};
int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(4);
    
}
