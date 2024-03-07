#include<bits/stdc++.h>
using namespace std;



class Node{
    public:
    int data;
    Node*next;
    Node(int data,Node*next){
        this->data=data;
        this->next=next;
    }
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

 Node* ConvertLLtoArr(vector<int>&arr){
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
    vector<int> arr;
    arr.emplace_back(23);
    arr.emplace_back(32);
    arr.emplace_back(12);
    arr.emplace_back(33);
    
    Node* head=ConvertLLtoArr(arr);
    cout<<head->data;
    cout<<endl;
}
