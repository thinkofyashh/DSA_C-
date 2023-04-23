#include <bits/stdc++.h> 
int lcs(string &s, string &t){
	//	Write your code here.
	int n=s.size();
	int m=t.size();
	vector<int> prev(m+1,0);
	vector<int> curr(m+1,0);
	// you can omit these two loops because we are initally initializing arr  with 0.
	//for(int j=0;j<=m;j++){
	//	dp[0][j]=0;
	//}
	//for(int i=0;i<=n;i++){
	//	dp[i][0]=0;
	//}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			 if (s[i-1] == t[j-1]) {
              curr[j]=1 + prev[j - 1];
			  ans=max(ans,curr[j]);
             }
        else curr[j]=0;

		}
		prev=curr;
	}
	return ans;
}