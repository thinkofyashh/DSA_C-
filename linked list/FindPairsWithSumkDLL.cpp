Node*findTail(Node*head){
    Node*temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    return temp;
}
vector<pair<int, int>> findPairs(Node* head, int k)
{
    // Write your code here.
    Node*left=head;
    Node*right=findTail(head);
    vector<pair<int,int>> ans;
    while(left->data<right->data){
        if(left->data+right->data==k){
            ans.push_back({left->data,right->data});
            left=left->next;
            right=right->prev;
        }
        else if(left->data+right->data>k){
            right=right->prev;
        }else{
            left=left->next;
        }
    }
    return ans;
}
