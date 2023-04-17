#include<bits/stdc++.h>
long f(int ind,int value,int*a,vector<vector<long>> &dp){
if(ind==0){
    return (value%a[0]==0);
}
if(dp[ind][value]!=-1){
    return dp[ind][value];
}
long nontake=f(ind-1,value,a,dp);
long take=0;
if(a[ind]<=value){
    take=f(ind,value-a[ind],a,dp);
}
return dp[ind][value]=nontake+take;
}
long countWaysToMakeChange(int *denominations, int n, int value)
{
    //Write your code here
    vector<vector<long>> dp(n,vector<long>(value+1,-1));
    return f(n-1,value,denominations,dp);
}