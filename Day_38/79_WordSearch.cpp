class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        // num of rows
        int rows = board.size();
        // num of col
        int cols = board[0].size();

        // lambda expression for backtracking
        function<bool(int, int, int)> backtrack = [&](int row, int col, int len)
        {
            if (len == word.length())
            {
                return true;
            }

            if (
                (row < 0) ||
                (row >= rows) ||
                (col < 0) ||
                (col >= cols) ||
                board[row][col] != word[len]
            ) {
                return false;
            }

            // unmark this node for the following traversal session
            char temp = board[row][col];
            board[row][col] = '\0';

            if (
                backtrack(row + 1, col, len + 1) ||
                backtrack(row - 1, col, len + 1) ||
                backtrack(row, col + 1, len + 1) ||
                backtrack(row, col - 1, len + 1) 
            ) {
                return true;
            }

            // reset node value to what is was
            board[row][col] = temp;
            return false;
        };

        // iterate over cells and start searching
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (board[i][j] == word[0])
                {
                    if (backtrack(i, j, 0))
                    {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};
