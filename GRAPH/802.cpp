class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool> visited(n, false);
        vector<bool> path(n, false);

        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                dfs(i, graph, visited, path);
            }
        }

        vector<int> result;
        for(int i = 0; i < n; i++) {
            if(!path[i]) {
                result.push_back(i);
            }
        }
        return result;
    }

    bool dfs(int current, vector<vector<int>>& graph,
             vector<bool>& visited, vector<bool>& path) {

        visited[current] = true;
        path[current] = true;

        for(int u : graph[current]) {              
            if(!visited[u]) {
                if(!dfs(u, graph, visited, path)) {
                    return false;
                }
            }
            else if(path[u]) {                     
                return false;
            }
        }

        path[current] = false;                     
        return true;
    }
};