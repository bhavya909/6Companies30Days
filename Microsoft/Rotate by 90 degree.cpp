* matrix : given input matrix, you are require 
 to change it in place without using extra space */
 
 // METHOD 1
void rotate(vector<vector<int> >& mat)
{
    // Your code goes here
    int n=mat.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(mat[i][j],mat[j][i]);
        }
    }
    
}

//METHOD 2
void rotate(vector<vector<int> >& mat)
{
    
    int n=mat.size();
    for(int i=0;i<=n/2-1;i++)
    {
        for(int j=0;j<=n-2*i-2;j++)
        {
            int temp=mat[i][j];
            mat[i][j]=mat[j][n-1-i];
            mat[j][n-1-i]=mat[n-1-i][n-1-j];
            mat[n-1-i][n-1-j]=mat[n-1-j][i];
            mat[n-1-j][i]=temp;
            
        }
    }
    
}

