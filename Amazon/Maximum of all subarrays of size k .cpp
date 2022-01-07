class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> ans;
        deque<int> q(k);
        for(int i=0;i<k;i++)
        {
            while(!q.empty() && arr[i]>q.back())
            q.pop_back();
            
            q.push_back(arr[i]);
        }
        ans.push_back(q.front());
        for(int i=k;i<n;i++)
        {
            if(arr[i-k]==q.front())
            q.pop_front();
            
            while(!q.empty() && arr[i]>q.back())
            q.pop_back();
            
            q.push_back(arr[i]);
            
            ans.push_back(q.front());
            
        }
        return ans;
    }
};
