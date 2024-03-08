// deleting the head of the DLL
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
Node* DeleteHead(Node*head){
    Node*prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete(prev);
    return head;
    
    
}
int main(){
    
    vector<int> arr={1,2,3,4,5,6,7,8};
    Node*head=Convert(arr);
   print(head);
   cout<<endl;
   // deleting the head of the DLL.
   Node*newhead=DeleteHead(head);
   print(newhead);
}
// Deleting the Tail of the DLL
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
Node* DeleteHead(Node*head){
    Node*prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete(prev);
    return head;
    
    
}
Node*DeleteTail(Node*newhead){
    if(newhead==NULL){
        return newhead;
    }
    Node*tail=newhead;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    Node*newTail=tail->back;
    newTail->next=nullptr;
    tail->back=nullptr;
    delete(tail);
    return newhead;
}
int main(){
    
    vector<int> arr={1,2,3,4,5,6,7,8};
    Node*head=Convert(arr);
   print(head);
   cout<<endl;
   // deleting the head of the DLL.
   Node*newhead=DeleteHead(head);
   print(newhead);
   cout<<endl;
   // deleting the tail of the DLL
   Node*samehead=DeleteTail(newhead);
   print(samehead);
   cout<<endl;
}
// deleting from the kth position 
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
Node* DeleteHead(Node*head){
    Node*prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete(prev);
    return head;
    
    
}
Node*DeleteTail(Node*newhead){
    if(newhead==NULL){
        return newhead;
    }
    Node*tail=newhead;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    Node*newTail=tail->back;
    newTail->next=nullptr;
    tail->back=nullptr;
    delete(tail);
    return newhead;
}

Node* DeleteKth(Node*head,int k){
    if(head==NULL) return head;
    int count =0;
    Node*temp=head;
    while(temp){
        count++;
        if(count ==k) break;
        temp=temp->next;
        //return head;
    }
    Node*prev=temp->back;
    Node*forward=temp->next;
    if(prev==NULL && forward==NULL){
        return NULL;
    }
    else if(prev==NULL){
        Node*ans=DeleteHead(head);
        return ans;
    }
    else  if(forward==NULL){
        Node*ans=DeleteTail(head);
        return ans;
    }
    prev->next=forward;
    forward->back=prev;
    temp->back=nullptr;
    temp->next=nullptr;
    delete(temp);
    return head;
}
int main(){
    
    vector<int> arr={1,2,3,4,5,6,7,8};
    Node*head=Convert(arr);
   print(head);
   cout<<endl;
   // deleting the head of the DLL.
   Node*newhead=DeleteHead(head);
   print(newhead);
   cout<<endl;
   // deleting the tail of the DLL
   Node*samehead=DeleteTail(newhead);
   print(samehead);
   cout<<endl;
   // deleting the kth position in the DLL
   Node*newHead=DeleteKth(samehead,6);
   print(newHead);
   cout<<endl;
}
// deleting the node 
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
Node* DeleteHead(Node*head){
    Node*prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete(prev);
    return head;
    
    
}
Node*DeleteTail(Node*newhead){
    if(newhead==NULL){
        return newhead;
    }
    Node*tail=newhead;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    Node*newTail=tail->back;
    newTail->next=nullptr;
    tail->back=nullptr;
    delete(tail);
    return newhead;
}

Node* DeleteKth(Node*head,int k){
    if(head==NULL) return head;
    int count =0;
    Node*temp=head;
    while(temp){
        count++;
        if(count ==k) break;
        temp=temp->next;
        //return head;
    }
    Node*prev=temp->back;
    Node*forward=temp->next;
    if(prev==NULL && forward==NULL){
        return NULL;
    }
    else if(prev==NULL){
        Node*ans=DeleteHead(head);
        return ans;
    }
    else  if(forward==NULL){
        Node*ans=DeleteTail(head);
        return ans;
    }
    prev->next=forward;
    forward->back=prev;
    temp->back=nullptr;
    temp->next=nullptr;
    delete(temp);
    return head;
}

void DeleteNode(Node*node){
    Node*prev=node->back;
    Node*front=node->next;
    if(front==NULL){
        prev->next=nullptr;
        node->back=nullptr;
        free(node);
        return;
    }
    prev->next=front;
    front->back=prev;
    node->back=node->next=nullptr;
    free(node);
    return ;
    
}
int main(){
    
    vector<int> arr={1,2,3,4,5,6,7,8};
    Node*head=Convert(arr);
   print(head);
   cout<<endl;
   // deleting the head of the DLL.
   Node*newhead=DeleteHead(head);
   print(newhead);
   cout<<endl;
   // deleting the tail of the DLL
   Node*samehead=DeleteTail(newhead);
   print(samehead);
   cout<<endl;
   // deleting the kth position in the DLL
   Node*newHead=DeleteKth(samehead,3);
   print(newHead);
   cout<<endl;
   // deleting the node 
   DeleteNode(newHead->next->next->next->next);
   print(newHead);
}
