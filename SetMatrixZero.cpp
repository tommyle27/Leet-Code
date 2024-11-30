class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // given:
        // given a m x n matrix of integers
        // m = rows, n = columns
        // CONSTRAINTS:
            // m >= 1
            // n <= 200
            // m == matrix.length
            // n == matrix[0].length

        // goal:
        // if an element is 0, change its entire row and column to 0's

        // return:
        // altered matrix

        // logic:
        // in place alteration

        int rows = matrix.size();
        int columns = matrix[0].size();
        bool rowZero = false;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < columns; c++) {
                if (matrix[r][c] == 0) {
                    matrix[0][c] = 0;

                    if (r > 0) {
                        matrix[r][0] = 0;
                    }
                    else {
                        rowZero = true;
                    }
                }
            }
        }

        for (int r = 1; r < rows; r++) {
            for (int c = 1; c < columns; c++) {
                if (matrix[0][c] == 0 || matrix[r][0] == 0) {
                    matrix[r][c] = 0;
                }
            }
        }

        if (matrix[0][0] == 0) {
            for (int r = 0; r < rows; r++) {
                matrix[r][0] = 0;
            }
        }

        if (rowZero == true) {
            for (int c = 0; c < columns; c++) {
                matrix[0][c] = 0;
            }
        }

    }
};