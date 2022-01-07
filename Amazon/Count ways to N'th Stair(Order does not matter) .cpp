class Solution
{
    public:
    //Function to count number of ways to reach the nth stair 
    //when order does not matter.
    long long countWays(int m)
    {
        // your code here
        long long dp[m+1]={0};
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=m;i++)
        {
            dp[i]=max(dp[i-2],dp[i-3])+1;
        }
        return dp[m];
    }
};
