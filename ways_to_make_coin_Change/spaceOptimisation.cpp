#include<bits/stdc++.h>

long countWaysToMakeChange(int *a, int n, int value)
{
  
    vector<long>prev(value+1,0);
    vector<long>curr(value+1,0);
   for(int t=0;t<=value;t++){
       prev[t]=(t%a[0]==0);
   }
   for(int ind=1;ind<n;ind++){
       for(int T=0;T<=value;T++){
           long nontake=prev[T];
           long take=0;
           if (a[ind] <= T) {
           take=curr[T-a[ind]];
}
       curr[T]=nontake+take;

       }
       prev=curr;

   }
   return prev[value];

}