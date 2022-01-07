class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n=arr.size();
        int dp1[n];
        int dp2[n];
        for(int i=0;i<n;i++)
        {
            dp1[i]=0;
            dp2[i]=0;
        }
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
                dp1[i]=dp1[i-1]+1;
            
        }
       
        for(int i=n-2;i>=0;i--)
        {
           
            if(arr[i]>arr[i+1])
                dp2[i]=dp2[i+1]+1;
            
            
        }
        int mx=0;
        for(int i=1;i<n-1;i++)
        {
            if(dp1[i]!=0 && dp2[i]!=0)
            mx=max(mx,dp1[i]+dp2[i]+1);
        }
        if(mx<3)
            return 0;
        return mx;
    }
};
