// optimal approach
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int> *DummyNode=new Node<int>(-1);
    Node<int> *temp=DummyNode;
    while(first!=nullptr && second!=nullptr){
        if(first->data<second->data){
            temp->next=first;
            temp=first;
            first=first->next;
        }else{
            temp->next=second;
            temp=second;
            second=second->next;
        }
    }
    if(first){
            temp->next=first;
        }else{
            temp->next=second;
        }
        return DummyNode->next;

}
