#include <bits/stdc++.h> 
int f(int ind,int w,vector<int> &weight,vector<int> &val,vector<vector<int>> &dp){
	if(ind==0){
		if(weight[0]<=w){
			return val[0];
		}
		else{
			return 0;
		}
	}
	if(dp[ind][w]!=-1){
		return dp[ind][w];
	}
	int notake=0+f(ind-1,w,weight,val,dp);
	int take=INT_MIN;
	if(weight[ind]<=w){
		take=val[ind]+f(ind-1,w-weight[ind],weight,val,dp);
	}
	return dp[ind][w]=max(notake,take);
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
	//result=(n-1,maxWeight,weight,value);
	vector<vector<int>> dp(n,vector<int>(maxWeight+1,-1));
	int result = f(n-1, maxWeight,weight,value,dp);

	return result;
}


