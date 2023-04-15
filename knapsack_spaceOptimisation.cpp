int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	
	//vector<vector<int>> dp(n,vector<int>(maxWeight+1,0));
	vector<int>prev(maxWeight+1,0),curr(maxWeight+1,0);
	for(int i=weight[0];i<=maxWeight;i++){
		prev[i]=value[0];
	}
	for(int ind=1;ind<n;ind++){
		for(int w=0;w<=maxWeight;w++){
			int notake=0+prev[w];
	int take=INT_MIN;
	if(weight[ind]<=w){
		take=value[ind]+prev[w-weight[ind]];
	}
	 curr[w]=max(notake,take);

		}
		prev=curr;
	}
	return prev[maxWeight];


}