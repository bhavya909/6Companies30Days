//User function Template for C++
/*
Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
//Function to count number of subtrees having sum equal to given sum.
int func(Node *root,int X,int &ans)
{
    if(!root)
    return 0;
    
    int x=func(root->left,X,ans);
    
    int y=func(root->right,X,ans);
    if(x+y+root->data==X) ans++;
    return x+y+root->data;
}
int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	int ans=0;
	int a=func(root,X,ans);
	return ans;
}
