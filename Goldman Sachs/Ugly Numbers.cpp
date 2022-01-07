class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    ull dp[n+1];
	    dp[0]=1;
	    int i2=0,i3=0,i5=0;
	    ull n2,n3,n5;
	    n2=2;
	    n3=3;
	    n5=5;
	    
	    for(int i=1;i<=n;i++)
	    {
	        
	        dp[i]=min(n2,min(n3,n5));
	        
	    
	        if(dp[i]==n2)
	        {
	            i2++;
	            n2=dp[i2]*2;
	        }
	        if(dp[i]==n3)
	        {
	            i3++;
	            n3=dp[i3]*3;
	            
	        }
	    
	        if(dp[i]==n5)
	        {
	            i5++;
	            n5=dp[i5]*5;
	        }
	    }
	    return dp[n-1];
	    
	}
};
