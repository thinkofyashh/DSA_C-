// brute force approach
#include<bits/stdc++.h>
Node* reverseDLL(Node* head)
{   
    // Write your code here 
    if(head==NULL || head->next==NULL) return head;
    stack<int>st;
    Node*temp=head;

    while(temp){
        st.push(temp->data);
        temp=temp->next;
    }  
    temp=head;
    while(temp){
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
    return head;
}
// optimal approach
// link reversal 
Node* reverseDLL(Node* head)
{   
    // Write your code here  
    if(head==NULL || head->next==NULL) return head;
    Node*current=head;
    Node*last=current->prev;
    while(current){
        last=current->prev;
        current->prev=current->next;
        current->next=last;
        current=current->prev;
    } 
    return last->prev;
}

