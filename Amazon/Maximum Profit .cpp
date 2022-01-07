class Solution {
  public:
    int maxProfit(int K, int N, int A[]) {
       int dp[K+1][N+1];
       for(int i=0;i<=N;i++)
        dp[0][i]=0;
        
       for(int i=0;i<=K;i++)
        dp[i][0]=0;
        
        for(int i=1;i<=K;i++)
        {
            int maxi=INT_MIN;
            for(int j=1;j<N;j++)
            {
                
                    maxi=max(maxi,-A[j-1]+dp[i-1][j-1]);
                
                dp[i][j]=max(maxi+A[j],dp[i][j-1]);
            }
        }
        return dp[K][N-1];
    }
};
