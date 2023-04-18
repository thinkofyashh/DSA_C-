int cutRod(vector<int> &price, int n)
{
	
	// Write your code here.
	vector<vector<int>> dp(n,vector<int> (n+1,0));
	vector<int>prev(n+1,0);
	vector<int>curr(n+1,0);
	for(int N=0;N<=n;N++ ){
		prev[N]=N*price[0];
	}
	for(int ind=1;ind<n;ind++){
		for(int N=0;N<=n;N++){
			int notake=0+prev[N];
	       int take=INT_MIN;
	       int rodlen=ind+1;
	       if(rodlen<=N){
		    take=price[ind]+curr[N-rodlen];
	        }
	         curr[N]=max(notake,take);

		}
		prev=curr;

	}
	return prev[n];
}