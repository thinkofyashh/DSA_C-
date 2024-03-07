#include<bits/stdc++.h>
using namespace std;



class Node{
    public:
    int data;
    Node*next;
    public:
    Node(int data,Node* next){
        this.data=data;
        this.next=next;
    }
    public:
    Node(int data){
        this.data=data;
        this.next=nullptr;
    }
};
int main(){
    
    Node*y=new Node(22,nullptr);
    cout<<y;
    
}