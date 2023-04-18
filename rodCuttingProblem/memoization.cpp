int f(int ind,int N,vector<int> &price,vector<vector<int>> &dp){
	if(ind==0){
		return N*price[0]; 
	}
	if(dp[ind][N]!=-1){
		return dp[ind][N];
	}
	int notake=0+f(ind-1,N,price,dp);
	int take=INT_MIN;
	int rodlen=ind+1;
	if(rodlen<=N){
		take=price[ind]+f(ind,N-rodlen,price,dp);
	}
	return dp[ind][N]=max(notake,take);
}
int cutRod(vector<int> &price, int N)
{
	
	// Write your code here.
	vector<vector<int>> dp(N,vector<int> (N+1,-1));
	return f(N-1,N,price,dp);
}