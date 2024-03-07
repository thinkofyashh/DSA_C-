// deletion of the head from the start
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
    // deletion of head from the start
    Node*temp=head;
    head=head->next;
    delete(temp);
    cout<<head->data;
}
// deletion from the end (tail of the LL)
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

Node* DeleteTail(Node * head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=nullptr;
    
    return head;
    
}
int main(){
    vector<int>arr={23,43,42,24};
    Node*head=convert(arr);
    // deletion of head from the start
    Node*temp=head;
    head=head->next;
    delete(temp);
    cout<<head->data<<endl;
    // deletion of the tail 
    Node* head1=DeleteTail(head);
    cout<<head1->data<<endl;
    
}
// deletion from the kth position 
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

Node* DeleteTail(Node * head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=nullptr;
    
    return head;
    
}
Node* DeleteKth(Node*head,int k){
    if(head==NULL) return head;
    if(k==1){
        Node*temp=head;
        head=head->next;
        free(temp);
    }
    int count=0;
    Node* prev=nullptr;
    Node*temp=head;
    while(temp){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
        
    }
    return head;
}
int main(){
    vector<int>arr={23,43,42,24,12,46,75,87,69,47,62,865};
    Node*head=convert(arr);
    // deletion of head from the start
    Node*temp=head;
    head=head->next;
    delete(temp);
    cout<<head->data<<endl;
    // deletion of the tail 
    Node* head1=DeleteTail(head);
    cout<<head1->data<<endl;
    // deletion from the kth positon of the ll
    Node*head2=DeleteKth(head,5);
    Node*temp1=head;
    while(temp1){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    
}
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

Node* DeleteTail(Node * head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=nullptr;
    
    return head;
    
}
Node* DeleteKth(Node*head,int k){
    if(head==NULL) return head;
    if(k==1){
        Node*temp=head;
        head=head->next;
        free(temp);
    }
    int count=0;
    Node* prev=nullptr;
    Node*temp=head;
    while(temp){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
        
    }
    return head;
}
Node* DeleteVal(Node*head,int val){
    if(head==NULL) return head;
    if(head->data==val){
        Node*temp=head;
        head=head->next;
        free(temp);
    }
    Node* prev=nullptr;
    Node*temp=head;
    while(temp){
        if(temp->data==val){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
        
    }
    return head;
}
int main(){
    vector<int>arr={23,43,42,24,12,46,75,87,69,47,62,865};
    Node*head=convert(arr);
    // deletion of head from the start
    Node*temp=head;
    head=head->next;
    delete(temp);
    cout<<head->data<<endl;
    // deletion of the tail 
    Node* head1=DeleteTail(head);
    cout<<head1->data<<endl;
    // deletion from the kth positon of the ll
    Node*head2=DeleteKth(head,5);
    Node*temp1=head;
    while(temp1){
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
    cout<<endl;
    //deletion by the value in the ll
    DeleteVal(head,87);
    Node*temp2=head;
    while(temp2){
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    cout<<endl;
}
