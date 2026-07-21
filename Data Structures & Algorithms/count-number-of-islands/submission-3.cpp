class Solution {
public:
    int N, M, ans;
    int visited[100][100];
    int dx[4] = {0, 0, 1, -1}; 
    int dy[4] = {1, -1, 0, 0};

    bool in_bounds(int x, int y){
        return x >= 0 && x < N && y >= 0 && y < M;
    }
    
    void dfs(vector<vector<char>>& grid, int x, int y, int progress, int accumulated) {
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (in_bounds(nx, ny) && !visited[nx][ny] && grid[nx][ny] != '0') {
                visited[nx][ny] = true;
                dfs(grid, nx, ny, progress + 1, accumulated + 1);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        N = grid.size();
        M = grid[0].size();
        ans = 0;

        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++)
                visited[i][j] = false;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (grid[i][j] == '1' && !visited[i][j]) {
                    ans++;
                    visited[i][j] = true;
                    dfs(grid, i, j, 0, 0);
                }
            }
        }
        return ans;
    }
};
