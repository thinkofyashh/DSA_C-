int mod=(int)(1e9+7);
#include <bits/stdc++.h> 
int f(int ind,int sum,vector<int> &num,vector<vector<int>> &dp){
    if(ind==0){
        if(sum==0 && num[0]==0){
            return 2;
        }
        if(sum==0){
            return 1;
        }
        if(num[0]==sum){
            return 1;
        }
        return 0;
    }
    if(dp[ind][sum]!=-1){
        return dp[ind][sum];
    }
    int notake=f(ind-1,sum,num,dp);
    int take=0;
    if(num[ind]<=sum){
        take=f(ind-1,sum-num[ind],num,dp);
    }
    return dp[ind][sum]=(take+notake) % mod;
}
int findWays(vector<int> &num, int tar)
{
    // Write your code here.
    int n=num.size();
    vector<vector<int>> dp(n,vector<int>(tar+1,-1));
    return f(n-1,tar,num,dp);
}
int countPartitions(int n, int d, vector<int> &arr) {
    // Write your code here.
    int totsum=0;
    for(int i=0;i<n;i++){
        totsum+=arr[i];
    }
    if(totsum-d<0 || ((totsum-d)%2)){
        return false;
    }
    return findWays(arr,(totsum-d)/2);
}