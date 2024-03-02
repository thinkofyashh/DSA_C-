## brute Force 
vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    vector<int>temp;
    for(int i=0;i<a.size();i++){
        if(a[i]!=0){
            temp.push_back(a[i]);
        }
    }
    for (int i = 0; i < temp.size(); i++) {
        a[i] = temp[i];
    }
    int x = temp.size();
    for (int i =x; i < n; i++){
        a[i]=0;
    }
    return a;
}
## optimal Approach
vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return a;
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[j],a[i]);
            j++;
        }
    }
    return a;
}
