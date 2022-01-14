class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int flag = 0;
         for(int y=0;y< grid.size();y++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[y][j] == 2)
                    q.push(make_pair(y,j));
                if(grid[y][j] == 1)
                    flag = 1;
            }
        }
        if(q.empty() && flag == 0)
            return 0;
        int nrow = grid.size();
        int count = 0;
        vector<vector<int>>directions = {{1,0}, {-1,0}, {0,1},{0,-1}};
        int ncol = grid[0].size();
        while(!q.empty()){
            int size = q.size();
            for(int y=0;y<size;y++){
                pair<int,int>p= q.front();
                q.pop();
                
                for(auto c: directions){
                    int x = p.first + c[0];
                    int y = p.second + c[1];
                    if(x >= 0 && y >= 0 && x < nrow && y< ncol &&grid[x][y] == 1 ){
                        q.push(make_pair(x,y));
                        grid[x][y] = 0;
                    }
                }
            }
            count++;
        }
        for(int y=0;y< grid.size();y++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[y][j] == 1)
                    return -1;
            }
        }
        
        return count-1;
    }
};
