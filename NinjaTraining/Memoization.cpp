int maxMerits(int day,int last,vector<vector<int>> &a,vector<vector<int>> &dp){
    if(day==0){
        int maxi=0;
        for(int task=0;task<3;task++){
            if(task!=last){
                maxi=max(maxi,a[0][task]);
            }
        }
        return maxi;
    }
    if(dp[day][last]!=-1){
        return dp[day][last];
    }
    int maxi=0;
    for(int i=0;i<3;i++){
        if(i!=last){
            int point=a[day][i]+maxMerits(day-1,i,a,dp);
            maxi=max(maxi,point);
        }
    }
    return dp[day][last]=maxi;
    
}
int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>> dp(n,vector<int>(4,-1));
    return maxMerits(n-1,3,points,dp);
}