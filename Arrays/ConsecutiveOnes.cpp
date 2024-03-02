int ConsecutiveOnes(vector<int> &a){
    int count =0;
    int precount=0;
    for(int i=0;i<a.size();i++){
        if(a[i]==1){
            count++;
        }
        else{
            if(precount<count) precount=count;
            count=0;
        }
    }
    return max(count,precount);
}
