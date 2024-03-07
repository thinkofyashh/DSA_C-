#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=next;
    }
};
bool CheckForVal(Node*head,int val){
    Node*temp=head;
    while(temp){
        if(temp->data==val){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
Node* convert(vector<int> &arr){
    Node*head=new Node(arr[0]);
    Node*mover=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int main(){
    vector<int>arr={23,43,42,24};
    Node*head=convert(arr);
    bool Present=CheckForVal(head,2113);
    if(Present){
        cout<<"Value is Present";
    }else{
        cout<<"Value is Not Present";
    }
}
