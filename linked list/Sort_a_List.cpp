// brute force 
#include<bits/stdc++.h>
Node *sortLL(Node *head)
{
    // Write your code here.
	Node*temp=head;
	vector<int>arr;
	while(temp){
		arr.push_back(temp->data);
		temp=temp->next;
	}
	temp=head;
	sort(arr.begin(),arr.end());
	int i=0; 
	while(temp){
		temp->data=arr[i];
		i++;
		temp=temp->next;
	}
	return head;
}

// optimal approach 

// finding middle using fast and slow pointer 
Node* findMiddle(Node*head){
	Node*slow=head;
	Node*fast=head->next;
	while(fast!=nullptr && fast->next!=nullptr){
		slow=slow->next;
		fast=fast->next->next;
	}
	return slow;
}

// mergeing of two ll 
Node* mergeLL(Node*list1,Node*list2){
	Node*DummyNode=new Node(-1);
	Node*temp=DummyNode;
	while(list1!=nullptr && list2!=nullptr){
		if(list1->data<list2->data){
			temp->next=list1;
			temp=list1;
			list1=list1->next;
		}else{
			temp->next=list2;
			temp=list2;
			list2=list2->next;
		}
	}
	if(list1){
		temp->next=list1;
	}else{
		temp->next=list2;
	}
	return DummyNode->next;
}

// merge sort 
Node *sortLL(Node *head)
{
    // Write your code here.
	if(head==nullptr || head->next==nullptr) return head;
	Node*middle=findMiddle(head);
	Node*lefthead=head;
	Node*righthead=middle->next;
	middle->next=nullptr;
	lefthead=sortLL(lefthead);
	righthead=sortLL(righthead);
	return mergeLL(lefthead,righthead);
}
