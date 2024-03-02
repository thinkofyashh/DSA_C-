## Better Approach
int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int hash[N+1]={0};
    for(int i=0;i<N-1;i++){
        hash[a[i]]++;
    }
    for(int i=0;i<N+1;i++){
        if(hash[i]==0){
            return i;
        }
    }
}

## optimal Approach
int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    int sum1=N*(N+1)/2;
    int sum2=0;
    for(int i=0;i<N-1;i++){
        sum2=sum2+a[i];
    }
    return sum1-sum2;
}
