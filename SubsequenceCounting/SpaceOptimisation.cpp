#include <bits/stdc++.h>

int mod=(int)(1e9+7); 
int subsequenceCounting(string &t, string &s, int n, int m) {
    
    vector<int>prev(m+1,0),curr(m+1,0);
    prev[0]=curr[0]=1;
   
  
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
             if(t[i-1]==s[j-1]){
              curr[j]=(prev[j-1]+prev[j])%mod;
    }
    else{
        curr[j]= (prev[j])%mod;

    }
    

        }
        prev=curr;
    }
    return prev[m];


} 