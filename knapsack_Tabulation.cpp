int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	
	vector<vector<int>> dp(n,vector<int>(maxWeight+1,0));
	
	for(int i=weight[0];i<=maxWeight;i++){
		dp[0][i]=value[0];
	}
	for(int ind=1;ind<n;ind++){
		for(int w=0;w<=maxWeight;w++){
			int notake=0+dp[ind-1][w];
	int take=INT_MIN;
	if(weight[ind]<=w){
		take=value[ind]+dp[ind-1][w-weight[ind]];
	}
	 dp[ind][w]=max(notake,take);

		}
	}
	return dp[n-1][maxWeight];


}