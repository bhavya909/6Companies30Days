class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int size=INT_MAX;
        int n=nums.size();
        int i=0;
        int start=0;
        int sum=0;
        
        while(i<n)
        {
            sum+=nums[i];
            if(sum<target)
            {
                
                i++;
                
            }
            else if(sum>=target)
            {
                while(sum>=target)
                {
                    size=min(size,i-start+1);
                    sum-=nums[start++];
                }
                i++;
                
                
            }
           
            
           
            
        }
        if(size==INT_MAX)
            return 0;
        return size;
    }
};
