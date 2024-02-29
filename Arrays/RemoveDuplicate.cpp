## Brute force
#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	set<int>st;
	for(int i=0;i<arr.size();i++){
		st.insert(arr[i]);
	}
	int i=0;
	vector<int> ans;
	for(auto it:st){
		ans[i]=it;
		i++;
	}
	return ans.size();

}
## optimal Approach
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i=0;
	for(int j=1;j<n;j++){
		if(arr[i]!=arr[j]){
			arr[i+1]=arr[j];
			i++;
		}
	}
	return i+1;
}
