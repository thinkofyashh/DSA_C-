// brute Force 
#include<bits/stdc++.h>
int lengthOfLoop(Node *head) {
    // Write your code here
    map<Node*,int> mp;
    int timer=1;
    Node*temp=head;
    while(temp){
        if(mp.find(temp)!=mp.end()){
            int value=mp[temp];
            return timer-value;
        }
        mp[temp]=timer;
        timer++;
        temp=temp->next;
    }
    return 0;
}
// optimal approach
int findLen(Node*slow,Node*fast){
    int count=1;
    fast=fast->next;
    while(slow!=fast){
        count++;
        fast=fast->next;
    }
    return count;
}
int lengthOfLoop(Node *head) {
    // Write your code here
    Node*slow=head;
    Node*fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return findLen(slow,fast);
        }
    }
    return 0;
}
