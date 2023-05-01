#include <bits/stdc++.h> 
int path(int i,int j,vector<vector<int>> &a,int n,vector<vector<int>> &dp){
	if(i==n-1){
		return a[n-1][j];
	}
	if(dp[i][j]!=-1){
		return dp[i][j];
        } else {
          int d = a[i][j] + path(i + 1, j, a, n,dp);
          int dg = a[i][j] + path(i + 1, j + 1, a, n,dp);
          return dp[i][j]=min(d, dg);
        }
}
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
	vector<vector<int>> dp(n,vector<int>(n,-1));
	return path(0,0,triangle,n,dp);
}