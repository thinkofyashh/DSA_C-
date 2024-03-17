Node* reverse(Node*head){
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    Node*newhead=reverse(head->next);
    Node*front=head->next;
    front->next=head;
    head->next=nullptr;
    return newhead;

}
Node* reverseLinkedList(Node *head)
{
    // Write your code here
   Node*newhead= reverse(head);
   return newhead;
}
