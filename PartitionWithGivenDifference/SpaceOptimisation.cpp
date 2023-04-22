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
    vector<int>prev(tar+1,0),curr(tar+1,0);
    // Write your code here.
    int n=num.size();
    
    if(num[0]==0){
        prev[0]=2;
    }
    else{
       prev[0]=1;
    }

    //if(num[0] == 0) dp[0][0] = 2;
    //The reason for this special case is that if the target sum tar is zero and the first element of the input vector num is also zero, then there are two ways to achieve this sum - either by taking the element or not taking the element. Therefore, dp[0][0] is set to 2.
    if(num[0]!=0 && num[0]<=tar){
        prev[num[0]]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<=tar;j++){
            int notake=prev[j];
    int take=0;
    if(num[i]<=j){
        take=prev[j-num[i]];
    }
     curr[j]=(take+notake) % mod;

        }
        prev=curr;
    }
    return prev[tar];
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


