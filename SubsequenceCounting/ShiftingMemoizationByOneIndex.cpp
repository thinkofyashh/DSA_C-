#include <bits/stdc++.h>

int mod=(int)(1e9+7); 
int f(int i,int j,string &s,string&t,vector<vector<int>> &dp){
    if(j==0){
        return 1;
    }
    if(i==0){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(s[i-1]==t[j-1]){
        return dp[i][j]=(f(i-1,j-1,s,t,dp)+f(i-1,j,s,t,dp))%mod;
    }
    return dp[i][j]= (f(i-1,j,s,t,dp))%mod;
}



int subsequenceCounting(string &t, string &s, int lt, int ls) {
    // Write your code here.
    vector<vector<int>> dp(lt+1,vector<int>(ls+1,-1));
    return f(lt,ls,t,s,dp);
} 