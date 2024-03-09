// Note all the insert Operation is Before.
// insert at the head
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
void print(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* insertHead(Node*head,int newData){
    Node* newHead=new Node(newData,head,nullptr);
    head->back=newHead;
    return newHead;
}



int main(){
    
    vector<int> arr={1,2,3,4,5,6,7,8};
    Node*head=Convert(arr);
   print(head);
   cout<<endl;
   //insert at the head
   Node*Head=insertHead(head,10);
   print(Head);
   

}
//insert at the tail 
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
void print(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* insertHead(Node*head,int newData){
    Node* newHead=new Node(newData,head,nullptr);
    head->back=newHead;
    return newHead;
}
Node* insertTail(Node*head,int val){
    if(head->next==NULL) return insertHead(head,val);
    Node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node*prev=tail->back;
    Node*newNode=new Node(val,tail,prev);
    prev->next=newNode;
    tail->back=newNode;
    return head;
}



int main(){
    
    vector<int> arr={1,2,3,4,5,6,7,8};
    Node*head=Convert(arr);
   print(head);
   cout<<endl;
   //insert at the head
   Node*Head=insertHead(head,10);
   print(Head);
   cout<<endl;
   //insert at the tail
   Node*newhead=insertTail(Head,100);
   print(newhead);
}
// insert at the kth position
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
void print(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* insertHead(Node*head,int newData){
    Node* newHead=new Node(newData,head,nullptr);
    head->back=newHead;
    return newHead;
}
Node* insertTail(Node*head,int val){
    if(head->next==NULL) return insertHead(head,val);
    Node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node*prev=tail->back;
    Node*newNode=new Node(val,tail,prev);
    prev->next=newNode;
    tail->back=newNode;
    return head;
}

Node*insertKth(Node*head,int newData,int k){
    if(k==1) return insertHead(head,newData);
    Node*temp=head;
    int count=0;
    while(temp){
        count++;
        if(count==k) break;
        temp=temp->next;
    }
    Node*prev=temp->back;
    Node*newNode=new Node(newData,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}



int main(){
    
    vector<int> arr={1,2,3,4,5,6,7,8};
    Node*head=Convert(arr);
   print(head);
   cout<<endl;
   //insert at the head
   Node*Head=insertHead(head,10);
   print(Head);
   cout<<endl;
   //insert at the tail
   Node*newhead=insertTail(Head,100);
   print(newhead);
   cout<<endl;
   //insert at the kth position 
   Node*newHead=insertKth(newhead,101,4);
   print(newHead);
}
// inserting at the node
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
void print(Node*head){
    Node*temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* insertHead(Node*head,int newData){
    Node* newHead=new Node(newData,head,nullptr);
    head->back=newHead;
    return newHead;
}
Node* insertTail(Node*head,int val){
    if(head->next==NULL) return insertHead(head,val);
    Node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node*prev=tail->back;
    Node*newNode=new Node(val,tail,prev);
    prev->next=newNode;
    tail->back=newNode;
    return head;
}

Node*insertKth(Node*head,int newData,int k){
    if(k==1) return insertHead(head,newData);
    Node*temp=head;
    int count=0;
    while(temp){
        count++;
        if(count==k) break;
        temp=temp->next;
    }
    Node*prev=temp->back;
    Node*newNode=new Node(newData,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}

void insertNode(Node*node,int val){
    Node*prev=node->back;
    Node*newNode=new Node(val,node,prev);
    prev->next=newNode;
    node->back=newNode;
    return;
}



int main(){
    
    vector<int> arr={1,2,3,4,5,6,7,8};
    Node*head=Convert(arr);
   print(head);
   cout<<endl;
   //insert at the head
   Node*Head=insertHead(head,10);
   print(Head);
   cout<<endl;
   //insert at the tail
   Node*newhead=insertTail(Head,100);
   print(newhead);
   cout<<endl;
   //insert at the kth position 
   Node*newHead=insertKth(newhead,101,4);
   print(newHead);
   cout<<endl;
   //insert the node 
   insertNode(newHead->next->next,10101);
   print(newHead);
   
}
