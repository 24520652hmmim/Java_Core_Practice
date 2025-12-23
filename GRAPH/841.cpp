class Solution {
public:
    void dfs(int current, vector<vector<int>>& rooms, vector<bool>& visited) {
        visited[current] = true;

        for(int u : rooms[current]) {
            if(!visited[u]) {
                dfs(u, rooms, visited);
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);

        dfs(0, rooms, visited);

        for(bool v : visited) {
            if(!v) return false;
        }
        return true;
    }
};
