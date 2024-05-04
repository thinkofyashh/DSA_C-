// brute force 
Node* collPoint(Node*t1,Node*t2,int d){
    while(d){
        t2=t2->next;
        d--;
    }
    while(t1!=t2){
        t1= t1->next;
        t2=t2->next;
    }
    return t1;
}
Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    int n1=0;
    Node*t1=firstHead;
    int n2=0;
    Node*t2=secondHead;
    while(t1){
        n1++;
        t1=t1->next;
    }
    while(t2){
        n2++;
        t2=t2->next;
    }
    if(n1<n2){
        return collPoint(firstHead,secondHead,n2-n1);
    }else{
        return collPoint(secondHead,firstHead,n1-n2);
    }
}
// 
