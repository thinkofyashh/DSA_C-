//brute force 
#include<bits/stdc++.h>
Node *firstNode(Node *head)
{
    //    Write your code here.
    map<Node*,int>mp;
    Node*temp=head;
    while(temp){
        if(mp.find(temp)!=mp.end()){
            return temp;
        }
        mp[temp]=1;
        temp=temp->next;
    }
    return nullptr;
}
//optimal approach 

Node *firstNode(Node *head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) { // Detect cycle
            slow = head; // Reset slow to head
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return fast; // Return the start of the cycle
        }
    }
    return nullptr; // No cycle detected
}
