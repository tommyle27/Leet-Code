class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        std::unordered_map<int, std::unordered_set<char>> row;
        std::unordered_map<int, std::unordered_set<char>> col;
        std::unordered_map<int, std::unordered_set<char>> box;

        for (int r = 0; r < board.size(); r++) {
            for (int c = 0; c < board.size(); c++) {
                if (board[r][c] == '.') {
                    continue;
                }

                int boxIndex = (r / 3) * 3 + (c / 3);

                if (row[r].count(board[r][c]) > 0 || col[c].count(board[r][c]) > 0 || box[boxIndex].count(board[r][c]) > 0) {
                    return false;
                }

                row[r].insert(board[r][c]);
                col[c].insert(board[r][c]);
                box[boxIndex].insert(board[r][c]);

            }
        }

        return true;

    }
};