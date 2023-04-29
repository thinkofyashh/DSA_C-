
#include <bits/stdc++.h>

int mod=(int)(1e9+7); 
int subsequenceCounting(string &t, string &s, int n, int m) {
    
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }
  
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
             if(t[i-1]==s[j-1]){
              dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mod;
    }
    else{
        dp[i][j]= (dp[i-1][j])%mod;

    }
    

        }
    }
    return dp[n][m];

   
} 