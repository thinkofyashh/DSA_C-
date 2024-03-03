##better approach 
#include<bits/stdc++.h>
int majorityElement(vector<int> v) {
	// Write your code here
	//{element,freqency}
	unordered_map<int,int> mp;
	int n=v.size();
	int majority=n/2;
	for(int i=0;i<n;i++){
		mp[v[i]]++;
	}
	for(auto it:mp){
		if(majority<it.second){
			return it.first;
		}
	}
	return -1;
}

## optimal approach
int majorityElement(vector<int> v) {
	// Write your code here
	int count=0;
	int element;
	int n=v.size();
	for(int i=0;i<n;i++){
		if(count==0){
			element=v[i];
			count=1;
		}
		else if(element==v[i]) count ++;
		else count --;
	}
	return element;
}
