// if the array is even.(there is even number of positive as well as even number of odd)
#brute Approach
vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    int n=a.size();
    vector<int>pos;
    vector<int>neg;

    for(int i=0;i<n;i++){
        if(a[i]>0) pos.push_back(a[i]);
        else neg.push_back(a[i]);
    }
    for(int i=0;i<n/2;i++){
        a[2*i]=pos[i];
        a[2*i+1]=neg[i];
    }
    return a;
}
## optimal Approach
vector<int> rearrangeArray(vector<int>& nums) {
    int pos=0;
    int neg=1;
    int n=nums.size();
    vector<int>ans(n,0);
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            ans[pos]=nums[i];
            pos+=2;
        } else{
            ans[neg]=nums[i];
            neg+=2;
        }
    }
    return ans;
        
    }
// if the array doesnt have equal number of positive and equal number of odd.

