class Solution{
public:
    bool canPair(vector<int> nums, int k) {
        // Code here.
        unordered_map<int,int>m;
        if(nums.size()%2!=0)
        return false;
        for(auto i:nums)
        {
            i=i%k;
            m[i]++;
        }
        if(m[0]%2!=0)
        return false;
        
        if(k%2==0)
        {
            if(m[k/2]%2!=0)
            return false;
        }
        for(int i=1;i<=k/2;i++)
        {
            if(m[i]!=m[k-i])
            return false;
        }
        return true;
        
    }
};
