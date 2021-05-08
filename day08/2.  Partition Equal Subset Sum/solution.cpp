class Solution {
public:
    bool canPartition(vector<int>& nums) {
        
        int s = 0,n=nums.size();
        
        
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
        }
        if(s & 1)
            return false;
        int t = s/2;
        
        bool dp[n+1][t+1];
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=t;j++)
            {
                if(i==0 && j==0)
                    dp[i][j] = true;
                
                else if(i==0)
                    dp[i][j] = false;
                else if(j==0)
                    dp[i][j] = true;
                else
                {
                    dp[i][j] = dp[i-1][j];
                    if (j >= nums[i-1]) 
                        dp[i][j] = (dp[i][j] || dp[i-1][j-nums[i-1]]);
                }
            }
        }
        return dp[n][t];
    }
};
