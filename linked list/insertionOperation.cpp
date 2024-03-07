//insertion at the start
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
    Node(int data,Node*next){
        this->data=data;
        this->next=next;
    }
};

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
    vector<int>arr={23,43,42,24,12,46,75,87,69,47,62,865};
    Node*head=convert(arr);
    // insertion at the start
    Node*newHead=new Node(99,head);
    Node*temp=newHead;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
   
}
// insertion at the end
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
    Node(int data,Node*next){
        this->data=data;
        this->next=next;
    }
};

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
void insertEnd(Node*head,int newData){
    Node*temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
     Node*newNode=new Node(newData,nullptr);
    temp->next=newNode;
}
int main(){
    vector<int>arr={23,43,42,24,12,46,75,87,69,47,62,865};
    Node*head=convert(arr);
    // insertion at the start
    Node*newHead=new Node(99,head);
    //insert at the end
    insertEnd(newHead,69);
    Node*temp=newHead;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
// insert at kth postion 
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
    Node(int data,Node*next){
        this->data=data;
        this->next=next;
    }
};

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
void insertEnd(Node*head,int newData){
    Node*temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
     Node*newNode=new Node(newData,nullptr);
    temp->next=newNode;
}

Node* insertKth(Node*head,int newData,int k){
    
    if(head==NULL){
        if(k==1){
            Node*newNode=new Node(newData);
            return newNode;
        }
    }
    if(k==1){
        Node*newNode=new Node(newData,head);
        return newNode;
    }
    int count=0;
    Node*temp=head;
    while(temp){
        count++;
        if(count==k-1){
            Node*x=new Node(newData);
            x->next=temp->next;
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
    
}
int main(){
    vector<int>arr={23,43,42,24,12,46,75,87,69,47,62,865};
    Node*head=convert(arr);
    // insertion at the start
    Node*newHead=new Node(99,head);
    //insert at the end
    insertEnd(newHead,69);
    Node*temp=newHead;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    // insert at kth position
    Node*newhead=insertKth(newHead,696969,15);
     Node*temp1=newhead;
    while(temp1){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    cout<<endl;
}
// insert by the value 
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
    Node(int data,Node*next){
        this->data=data;
        this->next=next;
    }
};

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
void insertEnd(Node*head,int newData){
    Node*temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
     Node*newNode=new Node(newData,nullptr);
    temp->next=newNode;
}

Node* insertKth(Node*head,int newData,int k){
    
    if(head==NULL){
        if(k==1){
            Node*newNode=new Node(newData);
            return newNode;
        }
    }
    if(k==1){
        Node*newNode=new Node(newData,head);
        return newNode;
    }
    int count=0;
    Node*temp=head;
    while(temp){
        count++;
        if(count==k-1){
            Node*x=new Node(newData);
            x->next=temp->next;
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
    
}
Node* insertval(Node*head,int newData,int val){
    
    if(head==NULL){
       return NULL;
    }
    if(head->data==val){
        Node*newNode=new Node(newData,head);
        return newNode;
    }
    Node*temp=head;
    while(temp){
        if(temp->next->data==val){
            Node*x=new Node(newData);
            x->next=temp->next;
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
    
}
int main(){
    vector<int>arr={23,43,42,24,12,46,75,87,69,47,62,865};
    Node*head=convert(arr);
    // insertion at the start
    Node*newHead=new Node(99,head);
    //insert at the end
    insertEnd(newHead,69);
    Node*temp=newHead;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    // insert at kth position
    Node*newhead=insertKth(newHead,696969,15);
    
     Node*temp1=newhead;
    while(temp1){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    cout<<endl;
    // insert by value
    Node*newhead1=insertval(newHead,696969,47);
    
     Node*temp2=newhead1;
    while(temp2){
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    cout<<endl;
}
