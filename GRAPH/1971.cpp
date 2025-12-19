class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        for(auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        queue<int>q;
        q.push(source);
        vector<bool>visited(n);
        visited[source] = true;

        while(q.size()) {
            int i = q.front();
            q.pop();
            for(int j : adj[i]) {
                if(!visited[j]) {
                    visited[j] = true;
                    q.push(j);
                }
            }
        }
        return visited[destination];
        
    }
};