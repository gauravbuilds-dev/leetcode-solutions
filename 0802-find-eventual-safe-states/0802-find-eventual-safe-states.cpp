class Solution {
public:
    bool dfs(int source, vector<bool>& vis, vector<bool>& pathVis, vector<vector<int>>& graph, vector<int>& safe) {
        if (safe[source] != -1) {
            return safe[source];
        }

        vis[source] = true;
        pathVis[source] = true;

        for (auto z : graph[source]) {
            if (!vis[z]) {
                if (!dfs(z, vis, pathVis, graph, safe)) {
                    return safe[source] = 0;
                }
            } else if (pathVis[z]) {
                return safe[source] = 0;
            }
        }

        pathVis[source] = false;
        return safe[source] = 1;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool> vis(n, false);
        vector<bool> pathVis(n, false);
        vector<int> safe(n, -1);
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i, vis, pathVis, graph, safe);
            }
        }

        for (int i = 0; i < n; i++) {
            if (safe[i] == 1) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};