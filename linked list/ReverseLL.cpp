//iterative method 
//bruteforce 
#include<bits/stdc++.h>
Node* reverseLinkedList(Node *head)
{
    // Write your code here
 Node*temp=head;
 stack<int> st;
 while(temp){
     st.push(temp->data);
     temp=temp->next;
 }
 temp=head;
 while(temp){
     int top=st.top();
     temp->data=top;
     st.pop();
     temp=temp->next;
 }
 return head;
}
// optimal approach
Node* reverseLinkedList(Node *head)
{
    // Write your code here
    Node*temp=head;
    Node*prev=nullptr;
    while(temp){
        Node*front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }
    return prev;
}
