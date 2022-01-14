class Solution
{
    int get_count(Node *root)
    {
        if (root == NULL) {
            return 0;
        }
        
        return (1 + get_count(root->left) + get_count(root->right));
    }
    
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        queue<Node *> queue;
        vector<int> arr;
        
        int count = get_count(root);
        
        //cout << "count = " << count << endl;
        
        queue.push(root);
        
        while (count > 0) {
            Node *node = queue.front();
            queue.pop();
            
            if (node == NULL) {
                //queue.push(NULL);
                //queue.push(NULL);
                arr.push_back(0);
            } else {
                arr.push_back(node->data);
                
                queue.push(node->left);
                queue.push(node->right);
                count--;
            }
        }
        return arr;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
        queue<Node *> queue;
       int len = A.size(), i = 1;
       /*
       for (int i = 0; i < len; i++) {
           cout << A[i] << endl;
       }*/
       //return NULL;
       if (A[0] == 0) {
           return NULL;
       }
       
       Node *root = new Node(A[0]);
       
       queue.push(root);
       
       while (i < len) {
           Node *node = queue.front();
           queue.pop();
           
           if (node == NULL) {
               //queue.push(NULL);
               //queue.push(NULL);
               //i = i + 2;
               continue;
           }
           
           if (A[i] != 0) {
               node->left = new Node(A[i]);
           }
           
           queue.push(node->left);
           
           i++;
           
           if (i >= len) {
               break;
           }
           
           if (A[i] != 0) {
               node->right = new Node(A[i]);
           }
           
           queue.push(node->right);
           
           i++;
       }
       return root;
    }
};
