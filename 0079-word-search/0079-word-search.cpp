class Solution {
public:
    bool dfs(vector<vector<char>>& board, string& word,
             int i, int j, int idx) {
        
        if (idx == word.size()) return true;

        int m = board.size();
        int n = board[0].size();

        if (i < 0 || i >= m || j < 0 || j >= n ||
            board[i][j] != word[idx]) {
            return false;
        }

        char temp = board[i][j];
        board[i][j] = '#';  // mark as visited

        bool found =
            dfs(board, word, i + 1, j, idx + 1) ||
            dfs(board, word, i - 1, j, idx + 1) ||
            dfs(board, word, i, j + 1, idx + 1) ||
            dfs(board, word, i, j - 1, idx + 1);

        board[i][j] = temp; // backtrack

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (dfs(board, word, i, j, 0))
                    return true;
            }
        }

        return false;
    }
};