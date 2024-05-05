Node * deleteAllOccurrences(Node* head, int k) {
    // Write your code here
    Node*temp=head;
    while(temp){
        if(temp->data==k){
            if(temp==head){
                head=head->next;
            }
            Node*back=temp->prev;
            Node*forward=temp->next;
            if(forward) forward->prev=back;
            if(back) back->next=forward;
            delete(temp);
            temp=forward;
        }else{
            temp=temp->next;
        }
        
    }
    return head;
}
