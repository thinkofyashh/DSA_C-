int cutRod(vector<int> &price, int n)
{
	
	// Write your code here.
	vector<vector<int>> dp(n,vector<int> (n+1,0));
	//return f(N-1,N,price,dp);
	for(int N=0;N<=n;N++ ){
		dp[0][N]=N*price[0];
	}
	for(int ind=1;ind<n;ind++){
		for(int N=0;N<=n;N++){
			int notake=0+dp[ind-1][N];
	       int take=INT_MIN;
	       int rodlen=ind+1;
	       if(rodlen<=N){
		    take=price[ind]+dp[ind][N-rodlen];
	        }
	         dp[ind][N]=max(notake,take);

		}

	}
	return dp[n-1][n];
}