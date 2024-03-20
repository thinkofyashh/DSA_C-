// brute force 
Node* deleteMiddle(Node* head){
    // Write your code here.
    if(head==nullptr || head->next==nullptr){
        return nullptr;
    }
    Node*temp=head;
    int n=0;
    while(temp){
       n++;
        temp=temp->next;
  
    }
    temp=head;
    int res=(n/2);
    while(temp){
        res--;
        if(res==0){
            Node*middle=temp->next;
            temp->next=temp->next->next;
            free(middle);
            break;
        }
        temp=temp->next;
    }
    return head;
}
