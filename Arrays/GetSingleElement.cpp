## brute force 
int getSingleElement(vector<int> &arr){
	// Write your code here.	
	int n=arr.size();
	int count=0;
	for(int i=0;i<n;i++){
		int num=arr[i];
		 count =0;
		for(int j=0;j<n;j++){
			if(num==arr[j]){
				count++;
			}
		}
		if(count!=2) return num;
	}
}
## better approach
#include<vector>
#include<bits/stdc++.h>
int getSingleElement(vector<int> &arr){
	// Write your code here.
	int n=arr.size();	
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++){
		mp[arr[i]]++;
	}
	int ans=0;
	for(auto it:mp){
		if(it.second==1){
			ans=it.first;
			break;
		}
	}
	return ans;
}
## optimal approach
int getSingleElement(vector<int> &arr){
	// Write your code here.	
	int n=arr.size();
	int ans=0;
	for(int i=0;i<n;i++){
		ans=ans^arr[i];
	}
	return ans;
}
