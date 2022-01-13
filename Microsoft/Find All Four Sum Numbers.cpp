class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int K) {
        // Your code goes here
        vector<vector<int> >ans;
        vector<int> v;
        
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
        
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            
            for(;j<n;j++)
            {
                int sum=arr[i]+arr[j];
                
                int k=j+1;
                int l=n-1;
                
                int target= K-sum;
               
                while(k<l)
                {
                    if((arr[k]+arr[l])==target)
                    {
                        ans.push_back({arr[i],arr[j],arr[k],arr[l] });
                        // cout<<"hi";
                        int f=arr[k];
                        int h=arr[l];
                        while(k<l && arr[k]==f ) k++;
                        while(l>k && arr[l]==h) l--;
                        
                    }
                    else if((arr[k]+arr[l]) > target)
                    l--;
                    
                    else
                    k++;
                }
                while(j+1<n && arr[j]==arr[j+1]) j++;
            }
            while(i+1<n && arr[i]==arr[i+1]) i++;
        }
        return ans;
    }
};
