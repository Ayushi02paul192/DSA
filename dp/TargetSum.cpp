class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n,count=0,sum=0;
        n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        if(nums[i]==0)
            count++;
        }
        if(sum<target)
            return 0;
        if((sum+target)%2!=0)
            return 0;
        int t=(sum+target)/2;
        int dp[n+1][t+1];
        for(int i=0;i<t+1;i++)
            dp[0][i]=0;
        for(int i=0;i<n+1;i++)
            dp[i][0]=1;
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<t+1;j++)
            {
                    
                 if(nums[i-1]>j || nums[i-1]==0)
                    dp[i][j]=dp[i-1][j];
                else
                   dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]]; 
                
            }
        }
        return pow(2,count)*dp[n][t];
    }
};