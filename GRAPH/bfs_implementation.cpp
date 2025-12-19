#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int>>adj; // adjacency list representation of graph
    int n; // number of nodes
    int s; //sources of nodes

    queue<int>q;
    vector<bool>visited(n);
    vector<int>distance(n);

    q.push(s);   // dua S vao hang doi
    visited[s] = true; // danh dau S da duoc tham
    distance[s] = 0; // khoang cach tu S den S la 0
    while (!q.empty()) {   //neu ko con nut nao trong queue
        int u = q.front();    //    lay nut dau hang doi
        q.pop();
        for (int v : adj[u]) {    //xet tat ca cac dinh ke voi u
            if (!visited[v]) {   // neu v chua duoc tham
                distance[v] = distance[u] + 1; //khoang cach tu S den v la khoang cach tu S den u + 1
                visited[v] = true; // danh dau v da duoc tham
                q.push(v);// dua v vao hang doi
            }
        }
    }

    return 0;
}

//Big O(V + E) voi V la so dinh va E la so canh trong do thi.