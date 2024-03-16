//brute force
Node* sortList(Node *head){
    // Write your code here.
    Node*temp=head;
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    while(temp){
        if(temp->data==0) cnt0++;
        else if(temp->data==1)cnt1++;
        else cnt2++;
        temp=temp->next;
    }
    temp=head;
    while(temp){
        if(cnt0){
            temp->data=0;
            cnt0--;
        }
        else if(cnt1){
            temp->data=1;
            cnt1--;
        }else{
            temp->data=2;
            cnt2--;
        }
        temp=temp->next;
    }
    return head;
}
//optimal approach
Node* sortList(Node *head){
    // Write your code here.
    Node*zerohead=new Node(-1);
    Node*onehead=new Node(-1);
    Node*twohead=new Node(-1);
    Node*zero=zerohead;
    Node*one=onehead;
    Node*two=twohead;
    Node*temp=head;
    while(temp){
        if(temp->data==0){
            zero->next=temp;
            zero=zero->next;
        }
        else if(temp->data==1){
            one->next=temp;
            one=one->next;
        }
        else{
            two->next=temp;
            two=two->next;
        }
        temp=temp->next;
    }
    zero->next=(onehead->next)?onehead->next:twohead->next;
    one->next=twohead->next;
    two->next=nullptr;
    Node*newhead=zerohead->next;
    return newhead;

    
}
