## optimal apprach
// using prefix sum concept 
int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
    // Write Your Code Here
    unordered_map<int,int> mp;
    int PrefixSum=0;
    mp[0]=1;
    int count=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        PrefixSum+=arr[i];
        int remove=PrefixSum-k;
        count+=mp[remove];
        mp[PrefixSum]++;
    }
    return count;

}
