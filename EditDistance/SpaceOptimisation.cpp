int editDistance(string s, string t)
{
    //write you code here
    int n=s.size();
    int m=t.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    vector<int>prev(m+1,0);
    vector<int>curr(m+1,0);
    
    for(int i=0;i<=n;i++){
        curr[0]=i;
    }
    for(int j=0;j<=m;j++){
        prev[j]=j;
            }
     for(int i=1;i<=n;i++){
         for(int j=1;j<=m;j++){
             if(s[i-1]==t[j-1]){
         curr[j]=0+prev[j-1];
             } else {
               curr[j] =
                   1 + min(curr[j - 1], min(prev[j - 1], prev[j]));
             }
         }
         prev=curr;
     }
     return prev[m];       


}