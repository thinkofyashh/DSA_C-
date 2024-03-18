//Brute force
#include<bits/stdc++.h>
bool detectCycle(Node *head)
{
	//	Write your code here
    map<Node*,int> mp;
    Node*temp=head;
    while(temp){
        if(mp.find(temp)==1){
            return true;
        }
        mp[temp]=1;
        temp=temp->next;
    }
    return false;
}
//optimal approach 
bool detectCycle(Node *head)
{
	//	Write your code here
    Node*slow=head;
    Node*fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}
