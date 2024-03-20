// brute force 
#include<bits/stdc++.h>
bool isPalindrome(Node *head)
{
    // write your code here
    Node*temp=head;
    stack<int> st;
    while(temp){
        st.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while(temp){
        if(temp->data != st.top()){
            return false;
        }
        temp=temp->next;
        st.pop();
    }
    return true;
}
// optimal approach
Node* reverse(Node*head){
    if(head==nullptr || head->next==nullptr) return head;
    Node*newhead=reverse(head->next);
    Node*front=head->next;
    front->next=head;
    head->next=nullptr;
    return newhead;
}
bool isPalindrome(Node *head)
{
    // write your code here
    Node*slow=head;
    Node*fast=head;
    while(fast->next!=nullptr && fast->next->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node*newhead=reverse(slow->next);
    Node*first=head;
    Node*second=newhead;
    while(second!=nullptr){
        if(first->data!=second->data){
            reverse(newhead);
            return false;
        }
        second=second->next;
        first=first->next;
    }
    reverse(newhead);
    return true;
}
