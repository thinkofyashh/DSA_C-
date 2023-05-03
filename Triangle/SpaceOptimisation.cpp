int minimumPathSum(vector<vector<int>>& triangle, int n){
	vector<int>prev(n,0);
	for(int j=0;j<n;j++){
		prev[j]=triangle[n-1][j];
	}
	for(int i=n-2;i>=0;i--){
		vector<int> curr(n,0);
		for(int j=i;j>=0;j--){
			int d=triangle[i][j]+prev[j];
			int dg=triangle[i][j]+prev[j+1];
			curr[j]=min(d,dg);
		}
		prev=curr;
	}
	return prev[0];
}