#include <iostream>
#include <vector>

using namespace std;

// Hàm bổ trợ thực hiện DFS đệ quy
void dfs(int node, const vector<vector<int>>& connect, vector<bool>& vis) {
    // Đánh dấu node hiện tại đã thăm
    vis[node] = true;
    cout << "Visited node: " << node << endl; // Debug xem luồng đi

    // Tìm tất cả các hàng xóm (neighbor) của node này
    for (int u : connect[node]) {
        // Nếu hàng xóm chưa được thăm, gọi đệ quy DFS
        if (!vis[u]) {
            dfs(u, connect, vis);
        }
    }
}

// Hàm chính để duyệt toàn bộ đồ thị (xử lý cả đồ thị bị rời rạc)
void traverseGraph(int V, const vector<vector<int>>& connect) {
    // Khởi tạo mảng visited với kích thước V, mặc định là false
    vector<bool> vis(V, false);

    // Duyệt qua tất cả các đỉnh
    for (int i = 0; i < V; ++i) {
        // Nếu đỉnh chưa được thăm, gọi DFS để thăm toàn bộ các đỉnh có thể đến được từ i
        if (!vis[i]) {
            dfs(i, connect, vis);
        }
    }
}

int main() {
    // Ví dụ tạo đồ thị có 5 đỉnh (0 đến 4)
    int V = 5;
    vector<vector<int>> connect(V);

    // Thêm các cạnh (ví dụ: 0-1, 0-2, 3-4)
    connect[0] = {1, 2};
    connect[1] = {0};
    connect[2] = {0};
    connect[3] = {4};
    connect[4] = {3};

    traverseGraph(V, connect);

    return 0;
}