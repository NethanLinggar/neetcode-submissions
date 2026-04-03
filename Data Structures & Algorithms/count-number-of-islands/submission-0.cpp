class Solution {
public:
    vector<pair<int,int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};

    void bfs(vector<vector<char>>& grid, int row, int col, vector<vector<bool>>& visited) {
        queue<pair<int,int>> q;
        q.push({row, col});
        visited[row][col] = true;
        
        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();

            for (auto [dr, dc] : dirs) {
                int nr = r + dr;
                int nc = c + dc;
                if (nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size() && grid[nr][nc] == '1' && !visited[nr][nc]) {
                    visited[nr][nc] = true;
                    q.push({nr, nc});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(), false));
        int count = 0;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    count++;
                    bfs(grid, i, j, visited);
                }
            }
        }

        return count;
    }
};
