class Solution
{
    public:
    //Function to connect nodes at same level.
    void connect(Node *root)
    {
       // Your Code Here
       queue<Node*>q;
       q.push(root);
       while(!q.empty())
       {
           int sz=q.size();
           while(sz--)
           {
               Node *t=q.front();
               q.pop();
               if(sz)
               {
                   Node* m=q.front();
                   t->nextRight=m;
               }
               if(t->left) q.push(t->left);
               if(t->right) q.push(t->right);
           }
       }
    }    
      
};

