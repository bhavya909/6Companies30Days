class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    bool issafe(int i,int j,int row,int col,vector<vector<bool>> &vis,vector<vector<int>> &grid)
    {
        if(i>=0 && i<row && j>=0 && j<col && !vis[i][j] && grid[i][j]) return true;
        return false;
    }
    void dfs(int i,int j,int row,int col,vector<vector<int>>& grid, vector<vector<bool>>&vis,int &count)
    {
        int r[]={-1,-1,-1,0,0,1,1,1};
        int c[]={-1,0,1,-1,1,-1,0,1};
        vis[i][j]=true;
        for(int k=0;k<8;k++)
        {
            if(issafe(i+r[k],j+c[k],row,col,vis,grid))
            {
                count++;
                dfs(i+r[k],j+c[k],row,col,grid,vis,count);
            }
        }
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int ans=0;
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<bool>>vis;
        
        for(int i=0;i<row;i++)
        {
            vector<bool>v;
            for(int j=0;j<col;j++)
            {
                v.push_back(false);
               
            }
            vis.push_back(v);
        }
        
        for(int i=0;i<row;i++)
        {
            
            for(int j=0;j<col;j++)
            {
               
                if(grid[i][j] && !vis[i][j])
                {
                    int x=1;
                    dfs(i,j,row,col,grid,vis,x);
                    ans=max(ans,x);
                }
                
            }
            
        }
        return ans;
    }
    };
