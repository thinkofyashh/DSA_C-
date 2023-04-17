#include <bits/stdc++.h> 
int unboundedKnapsack(int n, int w, vector<int> &val, vector<int> &wt)
{
    // Write Your Code Here.
    vector<vector<int>> dp(n,vector<int>(w+1,0));
    vector<int>prev(w+1,0);
   
    for (int W = 0; W <= w; W++) {
      prev[W] = (W / wt[0]) * val[0];
    }
    for (int ind = 1; ind < n; ind++){
        for(int W=0;W<=w;W++){
            int notake=0+prev[W];
            int take=INT_MIN;
            if(wt[ind]<=W){
            take=val[ind]+prev[W-wt[ind]];
            }
             prev[W]=max(notake,take);

        }
        
    }
    return prev[w];
}