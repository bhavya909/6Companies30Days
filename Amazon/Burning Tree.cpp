class Solution {
  public:
  Node* start;
  void preorder(unordered_map<int,vector<int>>&mp,Node*root,int k)
  {
      if(root==NULL)
      return;
      
      if(root->left){mp[root->data].push_back(root->left->data);
      mp[root->left->data].push_back(root->data);}
      if(root->right){mp[root->data].push_back(root->right->data);
      mp[root->right->data].push_back(root->data);}
      
      if(root->data==k)
      {
          start=root;
      }
      preorder(mp,root->left,k);
      preorder(mp,root->right,k);
      
  }
    int minTime(Node* root, int target) 
    {
        queue<pair<int,int>>q;
        unordered_map<int,vector<int>>mp;
        preorder(mp,root,target);
        q.push({start->data,0});
        
        int t,n;
        unordered_set<int>s;
        s.insert(start->data);
        int ans=0;
        while(!q.empty())
        {
            t=q.front().first;
            n=q.front().second;
            ans=max(n,ans);
            q.pop();
            for(int i=0;i<mp[t].size();i++)
            {
                if(s.find(mp[t][i])==s.end())
                {
                    s.insert(mp[t][i]);
                    q.push({mp[t][i],n+1});
                }
            }
            
        }
        return ans;
    }
};
