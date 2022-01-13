class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > mat, int r, int c) 
    {
        // code here 
        vector<int> v;
        int rb=0,cb=0,re=r-1,ce=c-1;
        while(rb<=re && cb<=ce)
        {
            for(int i=cb;i<=ce;i++)
            {
                v.push_back(mat[rb][i]);
            }
            rb++;
            for(int i=rb;i<=re;i++)
            {
                v.push_back(mat[i][ce]);
            }
            ce--;
            if(rb<=re)
            {
                for(int i=ce;i>=cb;i--)
                {
                    v.push_back(mat[re][i]);
                }
                re--;
            }
            else
            break;
            if(cb<=ce)
            {
                for(int i=re;i>=rb;i--)
                {
                    v.push_back(mat[i][cb]);
                }
                cb++;
            }
            else
            break;
        }
        return v;
    }
};
