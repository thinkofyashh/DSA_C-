// optimal apprach by dummy node apprach
Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
    Node*temp1=num1;
    Node*temp2=num2;
    Node*DummyNode=new Node(-1);
    Node*curr=DummyNode;
    int carry=0;
    while(temp1 || temp2){
        int sum=carry;
        if(temp1) sum=sum+temp1->data;
        if(temp2) sum=sum+temp2->data;
        Node*newNode=new Node(sum%10);
        curr->next=newNode;
        curr=newNode;
        carry=sum/10;
        if(temp1) temp1=temp1->next;
        if(temp2) temp2=temp2->next;
    }
    if(carry){
        Node*newNode=new Node(carry);
        curr->next=newNode;
    }
    return DummyNode->next;

}
