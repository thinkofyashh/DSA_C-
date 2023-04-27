#include<bits/stdc++.h>

int lcs(string s, string t)
{
	//Write your code here
	int n=s.size();
	int m=t.size();
	//vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    vector<int>prev(m+1,0);
    vector<int>curr(m+1,0);
	for(int j=0;j<=m;j++){
		prev[j]=0;
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			 if (s[i-1] == t[j-1]) {
              curr[j]=1 + prev[j - 1];
             }
        else curr[j]=0+max(prev[j],curr[j-1]);

		}
        prev=curr;
	}
	return prev[m];
}

int canYouMake(string &str, string &ptr)
{
    // Write your code here.
    return str.size()+ptr.size()-2*lcs(str,ptr);
}