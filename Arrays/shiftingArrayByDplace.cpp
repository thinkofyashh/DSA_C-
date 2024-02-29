## brute force 
vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    vector<int>temp;
    // putting all the k elements in the temporary array
    for(int i=0;i<k;i++){
        temp.push_back(arr[i]);
    }
    int n=arr.size();

    //now shifting the array by k elements in the array
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    //now putting back all the number which are in the temporary array at the back of the arr.
    int j=0;
    for(int i=n-k;i<n;i++){
        arr[i]=temp[j];
        j++;
    }
    return arr;
}

## optimal Approach 
## remember reverse operation --> ( ].
vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
    return arr;

}
