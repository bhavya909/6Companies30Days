class Solution{
    public:
    string findOrder(string words[], int n, int alpha) {
        //code here
        Graph g(alpha);
 
    // Process all adjacent pairs of words and create a graph
    for (int i = 0; i < n-1; i++)
    {
        // Take the current two words and find the first mismatching
        // character
        string word1 = words[i], word2 = words[i+1];
        for (int j = 0; j < min(word1.length(), word2.length()); j++)
        {
            // If we find a mismatching character, then add an edge
            // from character of word1 to that of word2
            if (word1[j] != word2[j])
            {
                g.addEdge(word1[j]-'a', word2[j]-'a');
                break;
            }
        }
    }
 
    // Print topological sort of the above created graph
    
    g.topologicalSort();
    return ans;
        
    }
};
