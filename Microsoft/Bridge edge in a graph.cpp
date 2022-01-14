class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    bool isPath(int startNode, int desNode, vector<int> adj[], vector<int> &isVisited){
        if(startNode == desNode)
            return true;
        isVisited[startNode] = true;
        for(int node: adj[startNode]){
            if(!isVisited[node]){
                if(isPath(node, desNode, adj, isVisited)){
                    return true;
                }
            }
        }
        return false;
    }
    int isBridge(int V, vector<int> adj[], int c, int d) {
        vector<int>adj2[V];
        for(int i=0; i<V; i++){
            for(auto j : adj[i]){
                if((i == c and j == d) or (i == d or j == c)){
                    continue;
                }
                else{
                    adj2[i].push_back(j);
                }
            }
        }
        vector<int> isVisited(V, false);
        bool bl = isPath(c, d, adj2, isVisited);
        return !bl;
    }
};
