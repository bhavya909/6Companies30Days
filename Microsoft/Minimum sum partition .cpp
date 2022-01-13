class Solution { 
public:
    int subset(int arr[],int n,int sum)
    {
        int dp[n+1][sum+1];
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=0;
        }
        for(int i=0;i<=sum;i++)
        {
            dp[0][i]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                
                if(arr[i-1]>j)
                {
                dp[i][j]=dp[i-1][j];
                // cout<<"u"<<dp[i][j]<<" ";
                }
                
                else{
                dp[i][j]=max(dp[i-1][j] , arr[i-1]+dp[i-1][j-arr[i-1]]);
                
                // cout<<endl<<arr[i-1]+dp[i-1][j-arr[i-1]]<<endl;
                // cout<<"d"<<dp[i][j]<<" ";
                }
            }
            // cout<<endl;
        }
        return dp[n][sum];
    }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int total=0;
	    for(int i=0;i<n;i++)
	    {
	        total+=arr[i];
	    }
	    int t=total;
	    total=total/2;
	    int x=subset(arr,n,total);
	    return t-2*x;
	} 
};
