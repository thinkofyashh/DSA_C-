//brute force
Node *findMiddle(Node *head) {
    // Write your code here
    Node*temp=head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    int middleNode=(count/2)+1;
    temp=head;
    while(temp){
        middleNode--;
        if(middleNode==0) break;
        temp=temp->next;
    }
    return temp;
}
// optimal approach
//tortoise and hare algorithm 
Node *findMiddle(Node *head) {
    // Write your code here
    Node*slow=head;
    Node*fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
