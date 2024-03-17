// brute force 
Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    if(head==nullptr || head->next==nullptr) return nullptr;
    Node*temp=head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    temp=head;
    int res=count-K;
    if(res==0){
        Node*newhead=head->next;
        delete(head);
        return newhead;
    }
    while(temp){
        res--;
        if(res==0) break;
        temp=temp->next;
    }
    Node*deleteNode=temp->next;
    temp->next=temp->next->next;
    delete(deleteNode);
    return head;

}
// optimal approch 
Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node*fast=head;
    Node*slow=head;
    for(int i=0;i<K;i++) fast=fast->next;
    if(fast==nullptr){
        Node*newhead=head->next;
        delete(head);
        return newhead;
    }
    while(fast->next!=nullptr){
        fast=fast->next;
        slow=slow->next;
    }
    Node*delnode=slow->next;
    slow->next=slow->next->next;
    delete(delnode);
    return head;
}
