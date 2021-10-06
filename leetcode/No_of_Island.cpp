//Leetcode : 200. Number of Islands

class Solution
{
public:
    int numIslands(vector<vector<char>> &M)
    {
        int n = M.size();
        int m = M[0].size();
        int ans = 0;
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (M[i][j] == '1' && !visited[i][j])
                {
                    visited[i][j] = true;
                    ans++;
                    DFS(M, visited, i + 1, j, n, m);
                    DFS(M, visited, i - 1, j, n, m);
                    DFS(M, visited, i, j + 1, n, m);
                    DFS(M, visited, i, j - 1, n, m);
                }
            }
        }
        return ans;
    }

    void DFS(vector<vector<char>> &M, vector<vector<bool>> &visited, int i, int j, int n, int m)
    {
        if (i < 0 || j < 0 || i > (n - 1) || j > (m - 1) || visited[i][j] || M[i][j] == '0')
        {
            return;
        }
        if (M[i][j] == '1' && !visited[i][j])
        {
            visited[i][j] = true;
            DFS(M, visited, i + 1, j, n, m);
            DFS(M, visited, i - 1, j, n, m);
            DFS(M, visited, i, j + 1, n, m);
            DFS(M, visited, i, j - 1, n, m);
        }
    }
};