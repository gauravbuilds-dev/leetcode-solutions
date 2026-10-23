class Solution {
public:
    void bfs(int source, vector<bool>& vis,
             vector<vector<int>>& adjMatrix) {

        queue<int> q;
        q.push(source);
        vis[source] = true;

        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            for (int j = 0; j < adjMatrix[curr].size(); j++) {
                if (adjMatrix[curr][j] == 1 && !vis[j]) {
                    vis[j] = true;
                    q.push(j);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& adjMatrix) {

        int n = adjMatrix.size();
        int ans = 0;

        vector<bool> vis(n, false);

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                ans++;
                bfs(i, vis, adjMatrix);
            }
        }

        return ans;
    }
};