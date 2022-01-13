class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<pair<int,int>>s;
       vector<int> ans(n,0);
       s.push({price[0],1});
       ans[0]=1;
       for(int i=1;i<n;i++)
       {
           ans[i]=1;
           while(!s.empty() && price[i]>=s.top().first)
           {
               ans[i]+=s.top().second;
               s.pop();
           }
           s.push({price[i],ans[i]});
       }
       return ans;
    }
};

