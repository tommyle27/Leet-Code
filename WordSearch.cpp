class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        // given:
        // given a 2D array (m x n) matrix of characters "board"
        // given a string "word"
        // CONSTRAINTS:
            // m == board.size()
            // n == board[i].size()
            // m >= 1, n <= 6
            // 1 <= word.size() <= 15
            // board and word consists of ONLY lowercase AND uppercase english letters

        // goal:
        // determine if the string "word" can be constructed using the letters of sequentially adjacent cells in "board"

        // return:
        // boolean result

        // logic:
        // backtracking and dfs

        if (word == "") return false; // check if word in empty, if true return false

        // begin loops checking each characters in the matrix
        // if current character [row][col] is equal to word[0] call DFS
        for (int row = 0; row < board.size(); row++) {
            for (int col = 0; col < board[row].size(); col++) {
                // call DFS here
                if (DFS(board, word, row, col, 0)) return true;
            }
        }

        return false;
    }

    bool DFS(vector<vector<char>>& board, string word, int row, int col, int n) {
        // if reached the end of the word/all characters in word have been checked return true
        if (n == word.size()) return true;

        // if row and col are out of bounds or if the characters are not equal return false
        if (row < 0 || col < 0 || row >= board.size() || col >= board[row].size() || board[row][col] != word[n]) {
            return false;
        }

        // check character to '1' to flag as checked
        board[row][col] = '1';

        // recursively check all directions of current [row][col] 
        // checking if neighboring cells are equal to current letter in word
        bool result = DFS(board, word, row - 1, col, n + 1) || // check up
            DFS(board, word, row + 1, col, n + 1) || // check down
            DFS(board, word, row, col - 1, n + 1) || // check left
            DFS(board, word, row, col + 1, n + 1);   // check right


        // unflag character
        board[row][col] = word[n];

        return result;
    }
};