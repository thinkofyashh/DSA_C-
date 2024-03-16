// brute force 
Node* oddEvenList(Node* head)
{
	// Write your code here.
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    Node*temp=head;
    vector<int> arr;
    while(temp!=nullptr && temp->next!=nullptr){
        arr.push_back(temp->data);
        temp=temp->next->next;
    }
    if(temp){
        arr.push_back(temp->data);
    }
    temp=head->next;
    while(temp!=nullptr && temp->next!=nullptr){
        arr.push_back(temp->data);
        temp=temp->next->next;
    }
    if(temp){
        arr.push_back(temp->data);
    }
    int i=0;
    temp=head;
    while(temp){
        temp->data=arr[i];
        i++;
        temp=temp->next;
    }
    return head;

}
// optimal approach 
Node* oddEvenList(Node* head)
{
	// Write your code here.
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    Node*odd=head;
    Node*even=head->next;
    Node*evenhead=head->next;
    while(even!=nullptr && even->next!=nullptr){
        odd->next=odd->next->next;
        even->next=even->next->next;

        odd=odd->next;
        even=even->next;

    }
    odd->next=evenhead;
    return head;
}
