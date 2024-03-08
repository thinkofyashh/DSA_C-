#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    
    Node(int data,Node*next,Node*back){
        this->data=data;
        this->next=next;
        this->back=back;
    }
    
    Node(int data){
        this->data=data;
        this->next=nullptr;
        this->back=nullptr;
    }
    
};

Node* Convert(vector<int> arr){
    Node*head=new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
    
}
int main(){
    
    vector<int> arr={1,2,3,4,5,6,7,8};
    Node*head=Convert(arr);
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" " ;
        temp=temp->next;
    }
}
