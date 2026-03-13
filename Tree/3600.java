
class Solution {

    class DSU {
        int[] parent, rank;
        int count;

        DSU(int n) {
            parent = new int[n];
            rank = new int[n];
            count = 0;
            for (int i = 0; i < n; i++) parent[i] = i;
        }

        int find(int x) {
            if (parent[x] != x)
                parent[x] = find(parent[x]);
            return parent[x];
        }

        boolean union(int a, int b) {
            int pa = find(a), pb = find(b);
            if (pa == pb) return false;

            if (rank[pa] < rank[pb]) parent[pa] = pb;
            else if (rank[pa] > rank[pb]) parent[pb] = pa;
            else {
                parent[pb] = pa;
                rank[pa]++;
            }
            count++;
            return true;
        }
    }

    public int maxStability(int n, int[][] edges, int k) {
        int lo = 0, hi = 0;
        for (int[] e : edges) hi = Math.max(hi, e[2] * 2);

        int ans = -1;

        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (can(n, edges, k, mid)) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }

        return ans;
    }

    private boolean can(int n, int[][] edges, int k, int x) {
        DSU dsu = new DSU(n);

        List<int[]> normal = new ArrayList<>();
        List<int[]> upgrade = new ArrayList<>();

        for (int[] e : edges) {
            int u = e[0], v = e[1], s = e[2], must = e[3];

            if (must == 1) {
                if (s < x) return false;
                if (!dsu.union(u, v)) return false;
            } else {
                if (s >= x) normal.add(e);
                else if (2 * s >= x) upgrade.add(e);
            }
        }

        for (int[] e : normal) {
            if (dsu.union(e[0], e[1]) && dsu.count == n - 1)
                return true;
        }

        int used = 0;
        for (int[] e : upgrade) {
            if (used == k) break;
            if (dsu.union(e[0], e[1])) {
                used++;
                if (dsu.count == n - 1)
                    return true;
            }
        }

        return dsu.count == n - 1;
    }
}